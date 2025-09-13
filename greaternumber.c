//GREATER number 

#include<stdio.h>
#include<conio.h>
int main(){
	
	int num1,num2;
	
	printf("ENTER THE NUMBER 1=>\n");
	scanf("%d",&num1);
	
	printf("ENTER THE NUMBER 2=>\n");
	scanf("%d",&num2);
	
	if(num1>num2){
		
		printf("NUMBER 1 IS GREATER THAN NUMBER 2");
	}
	
	if(num2>num1){
		
		printf("NUMBER 2 IS GREATER THAN NUMBER 1");
	}
	
	getch();
	return 0;
}
