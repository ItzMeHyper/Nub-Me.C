#include <stdio.h>
void main() {
    int n, sum = 0, i;
    double avg ;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter the numbers: \n");

    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);

        sum = sum + a[i];
    }

    avg = (double)sum/n ;

    printf("The sum of the numbers is %d \n", sum);
    printf("The average of the numbers is %lf \n", avg);
}
