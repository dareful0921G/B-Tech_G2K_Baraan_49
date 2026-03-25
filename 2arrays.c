#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int size;
    int array1[MAX_SIZE], array2[MAX_SIZE], result[MAX_SIZE];

    printf("Enter number of elements: ");
    scanf("%d", &size);

    printf("Enter elements of first array:\n");
    for(int i = 0; i < size; i++) {
        scanf("%d", &array1[i]);
    }

    printf("Enter elements of second array:\n");
    for(int i = 0; i < size; i++) {
        scanf("%d", &array2[i]);
    }

    for(int i = 0; i < size; i++) {
        result[i] = array1[i] + array2[i];
    }

    printf("Resultant array after addition:\n");
    for(int i = 0; i < size; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}
