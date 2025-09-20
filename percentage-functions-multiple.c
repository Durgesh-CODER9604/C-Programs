//finding percentage using function 

#include<stdio.h>
#include<conio.h>

int science(float m1);
int maths(float m2);
int  sanskrit(float m3);
int percentage(float m1,float m2,float m3);

int main(){
	
	float m1;
	printf("\nenter the marks of science:");
	scanf("%f",&m1);
	
	float m2;
	printf("\nenter the marks of maths:");
	scanf("%f",&m2);
	
	float m3;
	printf("\nenter the marks of sanskrit:");
	scanf("%f",&m3);
	
	science(m1);
	maths(m2);
	sanskrit(m3);
	percentage(m1, m2, m3);
	getch();
	return 0;
}

int science(float m1){
    
    printf("\n---the marks of student---\n");
	
	printf("\nthe marks of science:%f",m1);
	
}
int maths(float m2){
	
	printf("\nthe marks of maths:%f",m2);
}
int  sanskrit(float m3){
	
	printf("\nthe marks of sanskrit:%f",m3);
}
int percentage(float m1,float m2,float m3){
	printf("\n___percentage___\n");
	printf("\nthe percentage of stduent:%f",(m1+m2+m3)/3);
	
}
