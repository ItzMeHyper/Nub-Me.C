#include <stdio.h>
void main() {
    int n, r, c, s = 0;
    printf("Enter a number: \n");
    scanf("%d", &n);
    c = n;

    while (n > 0) {
         r=n%10;
         s=s*10+r;
         n=n/10;
        }

    if(s==c) {
        printf("%d is palindrome.\n", c);
    } else {
        printf("%d is not a palindrome.\n", c);
    }
};