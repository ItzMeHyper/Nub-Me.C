#include <stdio.h>

int fact();

int main() {
    int f, result;

    printf("Enter a number: ");
    scanf("%d", &f);

    result = fact(f);

    printf("Factorial of %d = %d.\n", f, result);
}

int fact(int f) {
    int i, fact = 1;
        for(i = 1; i <= f; i++) {
            fact = fact*i;
        }
    return fact;
}