#include <stdio.h>

void main() {
    char str1[100], str2[100], result[200];
    int i = 0, j = 0;

    printf("Enter the first string ending with $: ");
    scanf("%s", str1);

    printf("Enter the second string ending with $: ");
    scanf("%s", str2);

    while (str1[i] != '$') {
        result[i] = str1[i];
        i++;
    }
    while (str2[j] != '$') {
        result[i] = str2[j];
        i++;
        j++;
    }
    result[i] = '\0';

    printf("Concatenated string is: %s ", result);
}