#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str); // Read the string

    // Print only the lowercase letters
    printf("Lowercase letters in the string: ");
    for (int i = 0; i < strlen(str); i++) {
        if (islower(str[i])) {
            printf("%c", str[i]);
        }
    }

    printf("\n");
    return 0;
}
