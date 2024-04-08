#include <stdio.h>
void main(){
    int row, col, i, j;

    printf("Enter the number of rows & columns: ");
    scanf("%d %d", &row, &col);

    int mat[row][col];

     printf("Entered matrix is of (%d X %d) size.\n", row, col);

    for(i = 0; i < row; i++){
        for(j = 0; j < col; j++){
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

        printf("\nThe matrix is:\n");

    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}