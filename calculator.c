//calculator 

#include<stdio.h>
#include<conio.h>
int main(){
	
	float num1,num2;
	int choice;
	
	printf("CALCULATOR\n"
	
	"1.addtion\n"
	"2.substraction\n"
	"3.multiplication\n"	
	"4.divide\n"
	
	);
	
	printf("enter the choice=>");
	scanf("%d",&choice);
	
	printf("ENTER THE NUBMER 1:\n");
	scanf("%f",&num1);
	
	printf("ENTER THE NUBMER 1:\n");
	scanf("%f",&num2);
	
	if (choice==1){
		
		printf("THE ADDITION OF THE NUMBERS=>%f",num1+num2);
	}
	
	if(choice==2){
		
		printf("THE SUBSTRACTION OF THE NUMBER=>%f",num1-num2 );
	}
	
	if(choice==3){
		
		printf("THE MULTIPLICATION OF TWO NUMBERs=>%f",num1*num2);
	}
	
	if (choice==4){
		
		printf("THE DIVISON num1/num2=>%f",num1/num2);
	}
	
	
	
	
	getch();
	
	return 0;
}
