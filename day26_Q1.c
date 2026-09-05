#include <stdio.h>

int main()
{
    int n, i, j;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = n; i >= 1; i--)
    {
        // Spaces
        for(j = 1; j < i; j++)
        {
            printf(" ");
        }

        // Numbers
        for(j = i; j <= n; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}