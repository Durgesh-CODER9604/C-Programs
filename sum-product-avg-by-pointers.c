#include<stdio.h>
#include<conio.h>
int work(int n1,int n2,int * sum , int * multiply,int *avg);
int main(){
	
	int n1,n2;
	int sum , multiply ;
	int avg;
	
	printf("\n enter the number 1 & 2:");
	scanf("%d%d",&n1,&n2);
	
	work(n1,n2,&sum,&multiply,&avg);
	
	printf("the value of sum =%d , multiplication =%d , avg=%d",sum,multiply,avg);
	getch();
	return 0;
	
	
}
int work(int n1,int n2,int *sum,int *multiply,int * avg){
	*sum=n1+n2;
	*multiply=n1*n2;
	*avg=(n1+n2)/2;
}
