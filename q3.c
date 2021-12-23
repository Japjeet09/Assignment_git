#include <stdio.h>
int main()
{
    int num, u_digit, t_digit, h_digit;

    printf("Enter a three digit number:-> ");
    scanf("%d", & num);
    u_digit=num%10;
    num=num/10;
    t_digit=num%10;
    h_digit=num/10;    
    printf("The sum of individual digits are:-> %d ",u_digit+t_digit+h_digit);
    return 0;
}