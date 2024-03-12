#include <stdio.h>

void main() {

    int n, i;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    printf("The first %d numbers are:\n", n);

    for(i=1; i<=n; i++) {

        printf("%d\n",i);

    }

};