#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double discriminant, r1, r2, realPart, imaginaryPart;

    printf("Enter coefficients a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = (b * b) - ((4 * a * c));

    // Condition for real and different roots
    if (discriminant > 0) {
        r1 = (-b + sqrt(discriminant)) / (2 * a);
        r2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and different: %.3lf and %.3lf\n", r1, r2);
    }
    // Condition for real and equal roots
    else if (discriminant == 0) {
        r1 = r2 = -b / (2 * a);
        printf("Roots are real and equal: %.3lf and %.3lf\n", r1, r2);
    }
    // Condition for complex roots
    else {
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and different:\n");
        printf("Root 1 = %.3lf+%.3lfi\n", realPart, imaginaryPart);
        printf("Root 2 = %.3lf-%.3lfi\n", realPart, imaginaryPart);
    }

    return 0;
}
