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
    printf("The reverse order of individual digits are:-> %d ",u_digit*100+t_digit*10+h_digit*1);
    return 0;
}