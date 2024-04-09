#include <stdio.h>

void main() {
    int row, col, i, j;

    printf("Enter the number of rows & columns of the matrices: ");
    scanf("%d %d", &row, &col);

    int Mat1[row][col], Mat2[row][col], sumMat[row][col];

    printf("Enter elements of the first matrix:\n");
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &Mat1[i][j]);
        }
    }

    printf("\nEnter elements of the second matrix:\n");
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &Mat2[i][j]);
        }
    }

    printf("\nThe first matrix is:\n");
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            printf("%d\t", Mat1[i][j]);
        }
        printf("\n");
    }

    printf("\nThe second matrix is:\n");
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            printf("%d\t", Mat2[i][j]);
        }
        printf("\n");
    }

    printf("\nThe sum of the matrices is:\n");
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            sumMat[i][j] = Mat1[i][j] + Mat2[i][j];
            printf("%d\t", sumMat[i][j]);
        }
        printf("\n");
    }
}
