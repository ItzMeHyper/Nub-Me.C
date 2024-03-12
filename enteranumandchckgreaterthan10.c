#include <stdio.h>
void main() {

    int num;

    printf("Enter a number:\n");
    scanf("%d", &num);

    if(num>10){
            printf(" %d is greater than 10", num);
        }
        else {
            printf("%d is less than 10", num);
        }
};