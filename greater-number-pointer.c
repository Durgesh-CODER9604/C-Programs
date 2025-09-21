#include<stdio.h>
#include<conio.h>

void great(int * a , int * b);
int main(){
	int a,b;
	printf("enter the value of a and b:\n");
	scanf("%d%d",&a,&b);
	great(&a,&b);
	getch();
	return 0;
	
}
void great(int * a , int * b ){
	if (*a>*b){
		printf("a is greater\n");
	}
	else{
		printf("b is greater\n");
	}
}
