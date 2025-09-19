//finding square of a number by using function

#include<stdio.h>
#include<conio.h>
#include<math.h>
void square(int number);
int main(){
	
	int number;
	
	printf("\nenter the number:");
	scanf("%d",&number);
	
	square(number);
	printf("the original value was:%d",number);
	getch();
	return 0;
}

void square(int number){
	int sq;
	sq=pow(number,2);
	printf("squared value:%d\n",sq);
}

