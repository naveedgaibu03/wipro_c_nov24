#include <stdio.h>

int isAlphabet(char ch) {
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        return 1; // Character is an alphabet
    }
    return 0; // Character is not an alphabet
}

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (isAlphabet(ch)) {
        printf("'%c' is an alphabet.\n", ch);
    } else {
        printf("'%c' is not an alphabet.\n", ch);
    }

    return 0;
}
