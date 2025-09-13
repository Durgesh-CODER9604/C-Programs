// calculator using switch 

#include<stdio.h>
#include<conio.h>
int main(){
	
	float a,b; // taking number as a and b 
	int choice;
	
	printf("CALCULATOR\n"
	
	"1.addtion\n"
	"2.substraction\n"
	"3.multiplication\n"	
	"4.divide\n"
	
	
	);
	
	printf("enter the choice=>\n");
	scanf("%d",&choice);
	
	printf("ENTER THE NUBMER 1:\n");
	scanf("%f",&a);
	
	printf("ENTER THE NUBMER 1:\n");
	scanf("%f",&b);
	
	switch(choice){
		
		case 1 : printf("THE ADDITION OF TWO NUMBER=>%f",a+b);
		break;
		
		case 2 : printf("THE SUBSTRACTION OF TWO NUMBER=>%f",a-b);
		break;
		
		case 3 : printf("THE MULTIPLICATION OF TWO NUMBER=>%f",a*b);
		break;
		
		case 4 : printf("THE DIVISON OF NUMBER a/b=>%f",a/b);
		break;
		

	}
	
	getch();
	
	return 0;
	
	
}
