#include <stdio.h>

/**
 * Function to count the number of even digits in a number.
 * @param num The input number.
 * @return The count of even digits.
 */
int countEvenDigits(int num) {
    int count = 0; // Initialize count of even digits to zero
    int digit;

    // Handle negative numbers by taking the absolute value
    if (num < 0) {
        num = -num;
    }

    while (num > 0) {
        digit = num % 10; // Extract the last digit
        if (digit % 2 == 0) {
            count++; // Increment count if digit is even
        }
        num /= 10; // Remove the last digit
    }

    return count;
}

int main() {
    int number;

    // Prompt the user for input
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Call the function and display the result
    printf("The number of even digits in %d is: %d\n", number, countEvenDigits(number));

    return 0;
}
