#include <stdio.h>

int main() {
    char name[100];
    int i, lastSpace = -1;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    // Find the last space
    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ') {
            lastSpace = i;
        }
    }

    // Print initials
    printf("Initials: ");

    printf("%c.", name[0]);

    for (i = 1; i < lastSpace; i++) {
        if (name[i] == ' ' && name[i + 1] != '\0') {
            printf("%c.", name[i + 1]);
        }
    }

    // Print surname
    printf(" ");

    for (i = lastSpace + 1; name[i] != '\0' && name[i] != '\n'; i++) {
        printf("%c", name[i]);
    }

    return 0;
}