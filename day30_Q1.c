#include <stdio.h>

int main()
{
    int n, i, search, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &search);

    for(i = 0; i < n; i++)
    {
        if(a[i] == search)
        {
            found = 1;
            break;
        }
    }

    if(found == 1)
        printf("Element found at index %d", i);
    else
        printf("Element not found");

    return 0;
}