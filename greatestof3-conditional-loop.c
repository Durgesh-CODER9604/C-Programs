//using conditional loop printing greatest of three

#include<stdio.h>
#include<conio.h>
int main(){
	
	int n1,n2,n3,greatest;
	printf("Enter the number=>\n");
	scanf("%d %d %d",&n1,&n2,&n3);
	// using conditional as--> (condtional 1)?"A":(condtional 2)?"B";
	
	greatest=(n1>n2)?
	((n1>n3)?n1:n3):
	((n2>n3)?n2:n3);
	
	printf("the greatest number:%d",greatest);
	getch();
	return 0;
}
