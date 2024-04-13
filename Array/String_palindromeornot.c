#include <stdio.h>
#include <string.h>

void main() {
    char word[100];
    int i, len, isPal = 1;

    printf("Enter a word: ");
    scanf("%s", word);

    len = strlen(word);

    for(i = 0; i < len / 2; i++) {
        if(word[i] != word[len - i - 1]) {
            isPal = 0;
            break;
        }
    }

    if(isPal) {
        printf("%s is a palindrome.\n", word);
    } else {
        printf("%s is not a palindrome.\n", word);
    }
}
