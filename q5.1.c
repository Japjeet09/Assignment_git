#include <stdio.h>
int main()
{
    int num1, num2;   //Without using third variable
    printf("Enter the first number: ");
    scanf("%d", & num1);
    printf("Enter the second number: ");
    scanf("%d", & num2);
    printf("The two numbers before swapping: %d, %d", num1,num2 );

    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    printf("\nAfter swapping the two numbers are: %d, %d", num1, num2);
    return 0;
}