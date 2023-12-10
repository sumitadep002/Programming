#include <stdio.h>
#include <stdlib.h>

int main() {
    int r, c;
    printf("Enter the number of rows and columns to create an array: ");
    scanf("%d %d", &r, &c);
    
    int **arr = (int **)malloc(r * sizeof(int *));
    
    for (int i = 0; i < r; i++) {
        arr[i] = (int *)malloc(c * sizeof(int));
        printf("\nEnter the elements of row %d, separating each element by space: ", i + 1);
        for (int j = 0; j < c; j++) {
            scanf("%d", *(arr+i)+j);
        }
    }
    
    printf("\nThe entered array is:\n");
    
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", *(*(arr+i)+j));
        }
        printf("\n");
    }
    
    // the pointer
    for (int i = 0; i < r; i++) {
        free(*(arr+i));
    }
    
    //free the pointer to pointer
    free(arr);

    return 0;
}
