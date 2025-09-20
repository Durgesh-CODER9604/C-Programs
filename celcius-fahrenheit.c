//celcius to fahrenheit

#include<stdio.h>
#include<conio.h>

int FC();
int main(){
	
	FC();

	getch();
	return 0;
	
}

int FC(){
	float c;
	float f;
	printf("\nthe value of c:");
	scanf("%f",&c);
	f=(1.8*c)+32;
	
	printf("\nThe value of fahernheit:%f",f);
	printf("\nthe value of c :%f",c);
}
