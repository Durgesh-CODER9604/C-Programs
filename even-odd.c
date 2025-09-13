//Even Odd number checking 

#include<stdio.h>
#include<conio.h>

int main(){
	
	int number;
	
	printf("ENTER THE NUMBER YOU WANT TO CHECK=>\n");
	scanf("%d",&number);
	
	if(number%2==0){
		printf("THE NUMBER IS EVEN");
	}
	
	if (number%2!=0){
		printf("THE NUMBER IS ODD");
	}
	
	getch();
	return 0;
}
