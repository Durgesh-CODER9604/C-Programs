//sum of individual digits 
#include<stdio.h>
#include<conio.h>

int main(){
	
	int n,sum=0,rem;
	printf("enter the numbre:\n");
	scanf("%d",&n);
	
	while(n!=0){
		
		rem=n%10;
		sum=sum+rem;	
		n=n/10;		
	}
	printf("THE VALUE OF SUM=%d\n",sum);
	
	getch();
	return 0;
	
}
