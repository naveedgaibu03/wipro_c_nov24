#include <stdio.h>

int isDigit(char ch) {
    if (ch >= '0' && ch <= '9') {
        return 1; // Character is a digit
    }
    return 0; // Character is not a digit
}

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (isDigit(ch)) {
        printf("'%c' is a digit.\n", ch);
    } else {
        printf("'%c' is not a digit.\n", ch);
    }

    return 0;
}
