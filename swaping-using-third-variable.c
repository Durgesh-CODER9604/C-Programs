//swaping two number using third variable 

#include <stdio.h>
#include <conio.h>

int main() {
    int num1, num2;
    int temp;

    printf("ENTER num1 =>\n");
    scanf("%d", &num1);

    printf("ENTER num2 =>\n");
    scanf("%d", &num2);

    // swapping using third variable
    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("THE VALUE OF num1 after swapping => %d\n", num1);
    printf("THE VALUE OF num2 after swapping => %d\n", num2);

    getch();
    return 0;
}

