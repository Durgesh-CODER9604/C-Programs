//printing * as triangle

#include<stdio.h>
#include<conio.h>

int main(){
	
	int n,i=1,j;
	
	printf("ENTER THE NUMBER:\n");
	scanf("%d",&n);
	
	while(i<=n){
		j=1;
		while(j<=i){
			printf("*");
			j++;
		}
		
		printf("\n");
		i++;		
	}
	getch();
	
	return 0;
	
}
