#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", & num);
    if(num>=100 && num<=200){
        printf("The number is in range.");}
    else{printf("The number is not in range.");}
    return 0;
}
