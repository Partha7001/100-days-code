#include <stdio.h>
#include <string.h>

int main()
{
    char str[200];
    int start = 0, end;

    printf("Enter a sentence: ");
    fgets(str, 200, stdin);

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ' || str[i] == '\n')
        {
            end = i - 1;

            for(int j = end; j >= start; j--)
                printf("%c", str[j]);

            if(str[i] == ' ')
                printf(" ");

            start = i + 1;
        }
    }

    return 0;
}