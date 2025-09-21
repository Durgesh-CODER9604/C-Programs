#include<stdio.h>
#include<conio.h>

void swap(int a,int b,int temp);
int main(){
	int a,b,temp;
	printf("\nenter the a:");
	scanf("%d",&a);
	
	printf("\nenter the b:");
	scanf("%d",&b);
	
	
	swap(a,b,temp);
	return 0;
	
}

void swap(int a,int b,int temp){
	temp=a;
	a=b;
	b=temp;
	printf("\na after swaped:%d",a);
	printf("\nb after swaped:%d",b);
}
