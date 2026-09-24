#include <stdio.h>

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            for(int j = i + 1; str[j] != '\0'; j++)
            {
                if(str[i] == str[j])
                {
                    printf("First repeating character = %c", str[i]);
                    return 0;
                }
            }
        }
    }

    printf("No repeating lowercase alphabet");

    return 0;
}