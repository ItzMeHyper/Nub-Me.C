#include <stdio.h>
void main() {

    int a, b, largest;

    printf("Enter first number:\n");
    scanf("%d", &a);
    printf("Enter second number:\n");
    scanf("%d", &b);

    largest = (a>b)?a:b;

    printf("Largest number is %d ",largest);

}