#include <stdio.h>

int isAlphanumeric(char ch) {
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')) {
        return 1; // Character is alphanumeric
    }
    return 0; // Character is not alphanumeric
}

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (isAlphanumeric(ch)) {
        printf("'%c' is an alphanumeric character.\n", ch);
    } else {
        printf("'%c' is not an alphanumeric character.\n", ch);
    }

    return 0;
}
