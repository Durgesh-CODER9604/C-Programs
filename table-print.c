//table
#include<stdio.h>
#include<conio.h>

int main(){
    int num, i = 1;
    printf("ENTER THE NUMBER=>\n");
    scanf("%d", &num);
    while(i <= 10){
        printf("%d * %d = %d\n", num, i, num * i);
        i++;
    }
    getch();
    return 0;
}


