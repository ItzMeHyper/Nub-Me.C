#include <stdio.h>
void main() {
    int a[4], sum = 0, i;
    double avg ;
    printf("Enter the numbers: \n");

    for(i = 0; i<4; i++) {
        scanf("%d", &a[i]);

        sum = sum + a[i];
    }
    avg = (double)sum/4 ;

    printf("The sum of the numbers is %d \n", sum);
    printf("The average of the numbers is %lf \n", avg);
}