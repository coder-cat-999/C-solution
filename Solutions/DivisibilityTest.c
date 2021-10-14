#include <stdio.h>

int main()
{
    int number, divisor;
    
    printf("Enter the dividend (number which you want to divide):\t");
    scanf("%d",&number);
    printf("Enter the divisor(number by which you want to divide):\t");
    scanf("%d",&divisor);
    
    if(number%divisor==0)
    {
        printf("%d is divisible by %d\n", number, divisor);
        printf("Quotient = %d", (number/divisor));
    }
    else
    {
        printf("%d is not divisible by %d", number, divisor);
    }
}