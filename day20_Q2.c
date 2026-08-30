#include <stdio.h>

int main()
{
    int n, digit, divisor = 1;

    printf("Enter a binary number: ");
    scanf("%d", &n);

    while(n / divisor >= 10)
    {
        divisor = divisor * 10;
    }

    printf("1's complement = ");

    while(divisor > 0)
    {
        digit = n / divisor;

        if(digit == 0)
            printf("1");
        else
            printf("0");

        n = n % divisor;
        divisor = divisor / 10;
    }

    return 0;
}