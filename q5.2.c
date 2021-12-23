#include <stdio.h>
int main()
{
    int num1, num2, swapnum;  //Using third variable
    printf("Enter the first number: ");
    scanf("%d", & num1);
    printf("Enter the second number: ");
    scanf("%d", & num2);
    printf("The two numbers before swapping: %d, %d", num1,num2 );

    swapnum=num1+num2;
    num1=swapnum-num1;
    num2=swapnum-num1;
    printf("\nAfter swapping the two numbers are: %d, %d", num1, num2);
    return 0;
}