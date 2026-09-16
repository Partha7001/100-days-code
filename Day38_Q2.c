#include <stdio.h>

int main(void) {
    int n;
    printf("Enter order of square matrix: ");
    scanf("%d", &n);

    int a[n][n];

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    int symmetric = 1;
    for (int i = 0; i < n && symmetric; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i][j] != a[j][i]) {
                symmetric = 0;
                break;
            }

    printf(symmetric ? "Symmetric\n" : "Not symmetric\n");
    return 0;
}