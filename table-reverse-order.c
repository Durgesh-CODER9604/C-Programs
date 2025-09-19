//printing table in reverse

#include<stdio.h>
#include<conio.h>
int main(){
	
	int n,i=10;
	
	printf("\nENTER THE VALUE FOR TABLE YOU WANT TO DISPLAY:");
	scanf("%d",&n);
	
	while(i>=1){
		printf("%d*%d=%d\n",n,i,n*i);
		i--;
	}

	getch();
	return 0;

}
