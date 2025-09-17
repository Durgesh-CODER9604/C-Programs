// palindrome 

#include<stdio.h>
#include<conio.h>
int main(){
	
	int a,x,rem,rev=0;
	printf("ENTER THE VALUE OF a=>\n");
	scanf("%d",&a);
	
	x=a;
	
	while(x>0){
		
		rem=x%10;
		rev=(rev*10)+ rem;
		x=x/10;
	}
	           
	if (a==rev){
		printf("THE NUMBER IS PALINDROME");
	}
	
	else{
		printf("NOT A PLAINDROME NUMBER");
	}
	getch();
	return 0;
	
}
