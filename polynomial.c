#include <stdio.h>

struct polynomial {
    int expo;
    int coeff;
} poly[100];

int main() {
    int n, i, flag = 1;

    printf("Enter the number of terms in the polynomial: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter the coefficient and exponent of term %d: ", i + 1);
        scanf("%d %d", &poly[i].coeff, &poly[i].expo);
    }

    for (i = 0; i < n - 1; i++) {
        if (poly[i].expo < poly[i + 1].expo) {
            flag = 0;
            break;
        }
    }

    if (flag == 0) {
        printf("The polynomial is in incorrect order\n");
    }
    else {
        printf("The polynomial is: ");
        for (i = 0; i < n; i++) {
            if (poly[i].coeff != 0) {
                if (i > 0 && poly[i].coeff > 0) {
                    printf(" + ");
                }
                else if (i > 0) {
                    printf(" ");
                }

                if (poly[i].expo == 0) {
                    printf("%d", poly[i].coeff);
                }
                else if (poly[i].expo == 1) {
                    printf("%dx", poly[i].coeff);
                }
                else {
                    printf("%dx^%d", poly[i].coeff, poly[i].expo);
                }
            }
        }
        printf("\n");
    }


}
