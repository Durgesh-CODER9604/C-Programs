//armstrong
#include<stdio.h>
#include<conio.h>
int main(){
	
	int n1,c,arm=0,rem;
	printf("Enter the number n1:\n");
	scanf("%d",&n1);
	
	c=n1;
	while(c!=0){
		
		rem=c%10;
		
		arm=arm + (rem*rem*rem) ;
		
		c=c/10;
	}
	
	if (n1==arm){
		printf("ARMSTRONG NUMBER");
	}
	else{
		printf("NOT ARMSTRONG NUMBER");
	}
}
