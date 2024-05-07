#include <stdio.h>

void main() {
    int i, n, x, flag = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n]; 

    printf("Enter the numbers: \n");

    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the number to search: ");
    scanf("%d", &x);

    for(i = 0; i < n; i++) {
        if(x == a[i]) {
            flag = 1;
            printf("Number is found\n");
            break;
        }
    }

    if(flag == 0) {
        printf("Number not found\n");
    }
}
