#include <stdio.h>

void main() {

    int n, r, c, s=0;

    printf("Enter a number: ");
    scanf("%d", &n);
  
    c = n;
  
    while(n>0){
        r = n%10;
        s = (r*r*r)+s;
        n = n/10;
    }
      if(s == c){
        printf("%d is an Armstrong number\n", s);
      } else {
        printf("%d is not an Armstrong number\n", s);
      }
};