#include <stdio.h>

void main() {
    int n, i, isPrime = 1;
    
    printf("Enter a number: \n");
    scanf("%d", &n);
    
    if(n == 1 || n == 0){
        printf("%d is neither prime nor composite\n", n);
    } else {
         for(i = 2; i <= n/2; i++) {
            if(n % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if(isPrime == 1) {
            printf("%d is prime\n", n);
        } else {
            printf("%d is not a prime number\n", n);
        }
    }
}
