#include <stdio.h>
void main(){
    int n, i, j;

    printf("Enter the size of the identity matrix: ");
    scanf("%d", &n);

    int Matrix[n][n];

        printf("\nThe identity matrix is:\n");

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if(i == j){
                Matrix[i][j] = 1;
            } else {
                Matrix[i][j] = 0;
            }
            printf("%d\t", Matrix[i][j]);
        }
        printf("\n");
    }
}