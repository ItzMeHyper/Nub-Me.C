#include <stdio.h>

void main() {
    int n, i, isPrime = 1;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    if(n == 0 || n == 1){
        isPrime = 0;
    }
    
    for(i = 2; i <= n/2; i++) {
        if(n % i == 0) {
            isPrime = 0;
            break;
        }
    }
    
    if(isPrime == 1) {
        printf("%d is prime\n", n);
    } else {
        printf("%d is not prime\n", n);
    }
}
