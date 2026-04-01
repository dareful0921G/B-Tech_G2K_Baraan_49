#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];
    int rowSum[rows];
    int colSum[cols];

    for(int i = 0; i < rows; i++) {
        rowSum[i] = 0;
    }
    for(int j = 0; j < cols; j++) {
        colSum[j] = 0;
    }

    printf("Enter the elements of the matrix:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            rowSum[i] += matrix[i][j];
        }
    }

    for(int j = 0; j < cols; j++) {
        for(int i = 0; i < rows; i++) {
            colSum[j] += matrix[i][j];
        }
    }

    printf("\nSum of each row:\n");
    for(int i = 0; i < rows; i++) {
        printf("Sum of row %d = %d\n", i, rowSum[i]);
    }

    printf("\nSum of each column:\n");
    for(int j = 0; j < cols; j++) {
        printf("Sum of column %d = %d\n", j, colSum[j]);
    }

    return 0;
}
