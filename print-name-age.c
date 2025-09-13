// printing name ,age by user input 

#include<stdio.h>
#include<conio.h>
int main(){
	
	int age;
	char name[50];
	
	printf("ENTER THE NAME=>\n");
	scanf("%s",name);
	
	printf("ENTER THE AGE=>\n");
	scanf("%d",&age);
	
	printf("THE NAME OF THE USER=>%s\n",name);
	printf("THE AGE OF THE USER=>%d",age);
	
	getch();
	return 0;
}
