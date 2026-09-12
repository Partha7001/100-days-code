#include <stdio.h>

int main()
{
    int n, i, element, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n + 1];

    printf("Enter elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &element);

    printf("Enter position: ");
    scanf("%d", &pos);

    // Shift elements to the right
    for(i = n; i >= pos; i--)
    {
        a[i] = a[i - 1];
    }

    // Insert element
    a[pos - 1] = element;

    printf("Array after insertion: ");
    for(i = 0; i <= n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}