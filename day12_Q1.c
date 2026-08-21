#include <stdio.h>

int main()
{
    int a, fine;

    printf("How many days late are you? ");
    scanf("%d", &a);

    if (a <= 5)
    {
        fine = a * 2;
        printf("Your fine will be %d rupees", fine);
    }
    else if (a <= 10)
    {
        fine = (5 * 2) + ((a - 5) * 4);
        printf("Your fine will be %d rupees", fine);
    }
    else if (a <= 30)
    {
        fine = (5 * 2) + (5 * 4) + ((a - 10) * 6);
        printf("Your fine will be %d rupees", fine);
    }
    else
    {
        printf("Your membership is cancelled!");
    }

    return 0;
}