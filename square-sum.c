#include<stdio.h>
#include<math.h>

int main(){
	int n,rem,sum=0;
	printf("\nenter the number:");
	scanf("%d",&n);
	
	while(n!=0){
		rem=n%10;
		n=n/10;
		sum=(sum)+pow(rem,2);
	}
	
	printf("the square sum:%d",sum);
	return 0;
}
