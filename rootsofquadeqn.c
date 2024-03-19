#include <stdio.h>
#include <math.h>

int main() {

    float a,b,c,d,x1,x2;
    
    printf("Enter coefficients of a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);
    
    d = sqrt((b*b)-(4*a*c));
    x1 = (-b+d)/(2*a);
    x2 = (-b-d)/(2*a);

    printf("The roots are %f and %f", x1,x2);

}