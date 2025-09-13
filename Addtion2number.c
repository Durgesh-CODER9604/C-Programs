// Adding Two number taking alue from user
#include<stdio.h>
#include<conio.h>
int main(){
	
	float num1,num2;
	float sum;
	printf("ENTER THE VALUE OF number 1 =>\n");
	scanf("%f",&num1);
	printf("ENTER THE VALUE OF number 2 =>\n");
	scanf("%f",&num2);
	
	sum=num1+num2;
	printf("THE SUM OF TWO NUMBER =>%f\n",sum);
		
	getch();
	return 0;
	
}
