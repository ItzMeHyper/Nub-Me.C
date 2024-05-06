#include <stdio.h>
#include <string.h>

void rev(char []);

void main() {
    char str[25];
    printf("Enter a string: ");
    gets(str);
    rev(str);
}

void rev(char str[]) {
    char reverse[25];
    int i=0,j,len;

    while(str[i] != '\0') {
        i++;
    }

    len = i;
    //printf("Length is %d\n", len);

    for (j = 0;j < len; j++) {
        reverse[j] = str[i-1];
        i--;
    }
    reverse[j] = '\0';

    printf("Reversed string is: %s\n", reverse);

}