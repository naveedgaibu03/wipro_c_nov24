 #include <stdio.h>
#include <math.h>

/**
 * Function to find the sum of digits in even positions of a number.
 * @param num The input number.
 * @return The sum of even-placed digits.
 */
int sumEvenPlacedDigits(int num) {
    int digit, position = 1, sum = 0;

    // Handle negative numbers by taking the absolute value
    if (num < 0) {
        num = -num;
    }

    while (num > 0) {
        digit = num % 10; // Extract the last digit

        // Check if the position is even
        if (position % 2 == 0) {
            sum += digit; // Add the digit to the sum if the position is even
        }

        num /= 10; // Remove the last digit
        position++; // Move to the next position
    }

    return sum;
}

int main() {
    int number;

    // Prompt the user for input
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Call the function and display the result
    printf("The sum of even-placed digits in %d is: %d\n", number, sumEvenPlacedDigits(number));

    return 0;
}
