#include <stdio.h>

#define ROWS 3
#define COLS 3

int main()
{
    int i, j;
    int mat[ROWS][COLS];

    printf("Enter the matrix elements: \n");
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("The original matrix is: \n");
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }

    printf("The transposed matrix is: \n");
    for (j = 0; j < COLS; j++) {
        for (i = 0; i < ROWS; i++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}
