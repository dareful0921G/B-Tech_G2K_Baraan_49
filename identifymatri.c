#include <stdio.h>

#define MAX_SIZE 10

int main() {
    int n, i, j;
    int matrix[MAX_SIZE][MAX_SIZE];
    int isIdentity = 1; 

    printf("Enter the size of the matrix (max %d): ", MAX_SIZE);
    scanf("%d", &n);

    printf("Enter the elements of the %dx%d matrix:\n", n, n);
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(i == j) {
                if(matrix[i][j] != 1) {
                    isIdentity = 0;
                    break;
                }
            } else {
                if(matrix[i][j] != 0) {
                    isIdentity = 0;
                    break;
                }
            }
        }
        if(!isIdentity)
            break;
    }

    if(isIdentity)
        printf("The matrix is an identity matrix.\n");
    else
        printf("The matrix is NOT an identity matrix.\n");

    return 0;
}
