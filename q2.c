#include <stdio.h>
int main()
{
    int num1, num2, result;
    printf("Enter your first value: ");
    scanf("%d", & num1);

    printf("\nEnter your second value: ");
    scanf("%d", & num2);

    printf("\nThe sum of %d and %d is: ", num1, num2);
    printf("%d",result=num1+num2);

    printf("\nThe difference of %d and %d is: ", num1, num2);
    printf("%d",result=num1-num2);

    printf("\nThe multiplication of %d and %d is: ", num1, num2);
    printf("%d",result=num1*num2);

    printf("\nThe divison of %d and %d is: ", num1, num2);
    printf("%d",result=num1/num2);

    printf("\nThe remainder of %d and %d is: ", num1, num2);
    printf("%d", result=num1%num2);
    return 0;
}