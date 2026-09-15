#include <stdio.h>

int main() {
    int rows, cols;
    
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    
    int matrix[rows][cols];
    int rowSum[rows];
    
    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        rowSum[i] = 0;
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            rowSum[i] += matrix[i][j];
        }
    }
    
    printf("\nThe matrix is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    printf("\nRow sums:\n");
    for (int i = 0; i < rows; i++) {
        printf("Row %d sum = %d\n", i + 1, rowSum[i]);
    }
    
    return 0;
}