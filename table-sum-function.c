//using more than 1 function to print table  and adding 

#include<stdio.h>
#include<conio.h>


void table();

int sum(int a,int b);
int main(){
	 int n;
	 int a,b;
	 
	 printf("\nenter the number n:");
	 scanf("%d",&n);
	 printf("\nenter the number a:");
	 scanf("%d",&a);
	 printf("\nenter the number b:");
	 scanf("%d",&b);
	 
	 table(n);
	 sum( a, b);
	 getch();
	 return 0;
}

void table(int n){
	int i=1;
	while(i<=10){
	printf("%d\n",n*i);
	i++;
	}
	
}

int sum(int a,int b){
	int s;
	s=a+b;
	printf("the sum:%d",s);
	return 0;
}
