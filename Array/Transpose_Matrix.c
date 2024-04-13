#include <stdio.h>
void main(){
    int row, col, i, j;

    printf("Enter the number of rows & columns: ");
    scanf("%d %d", &row, &col);

    int Mat[row][col];

     printf("Entered matrix is of (%d X %d) size.\n", row, col);

    for(i = 0; i < row; i++){
        for(j = 0; j < col; j++){
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &Mat[i][j]);
        }
    }

        printf("\nThe Orginal matrix is:\n");

    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("%d\t", Mat[i][j]);
        }
        printf("\n");
    }
        printf("\nThe Transposed matrix is:\n");

    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("%d\t", Mat[j][i]);
        }
        printf("\n");
    }
}