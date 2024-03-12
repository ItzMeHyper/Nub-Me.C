#include <stdio.h>

int main() {
    int n, i;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    for(i = 2; i < n; i++) {
        if(n % i == 0) {
            printf("%d is not prime\n", n);
            return 0; // Exiting the program after finding a divisor
        }
    }
    
    printf("%d is prime\n", n);
    
    return 0;
}