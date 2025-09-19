//using functions and printing area of square , circle and rectangle;

#include<stdio.h>
#include<conio.h>
#include<math.h>


void areacircle(float radius);
void arearectangle(float length , float width);
void areasquare(float side);

int main(){
	float radius,length,width,side;
	printf("\nradius for circle:");
	scanf("%f",&radius);
	
	printf("\nlength for rectangle:");
	scanf("%f",&length);
	
	printf("\nwidth for rectangle::");
	scanf("%f",&width);
	
	printf("\nside of square:");
	scanf("%f",&side);
	areacircle(radius);
	arearectangle(length , width);
	areasquare(side);
	
	printf("\n-----THE ORIGINAL VALUES GIVEN-----\n");
	printf("radius:%f\n",radius);	
	printf("length:%f\n",length);
	printf("width:%f\n",width);
	printf("side:%f\n",side);
	getch();
	return 0;
}

void areacircle(float radius){
	float ac;
	float pi=3.14;
	ac=pi*pow(radius,2);
	printf("\n-----AREA-----\n");
	printf("The area of the circle:%f\n",ac);
}
void arearectangle(float length , float width){
	float ar;
	ar=length*width;
	printf("The area of the rectangle:%f\n",ar);
}
void areasquare(float side){
	float as;
	as=pow(side,2);
	printf("The area of the square:%f\n",as);
}


