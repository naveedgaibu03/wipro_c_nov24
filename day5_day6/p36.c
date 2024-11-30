#include <stdio.h>

/**
 * Function to generate the Fibonacci series up to `n` terms.
 * @param n Number of terms in the Fibonacci series to generate.
 */
void generateFibonacci(int n) {
    int first = 0, second = 1, next;

    if (n <= 0) {
        printf("Number of terms must be greater than 0.\n");
        return;
    }

    printf("Fibonacci series up to %d terms: ", n);

    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            printf("%d ", first); // Print the first term
            continue;
        }
        if (i == 2) {
            printf("%d ", second); // Print the second term
            continue;
        }

        next = first + second; // Calculate the next term
        printf("%d ", next);
        first = second;        // Update the first term
        second = next;         // Update the second term
    }

    printf("\n");
}

int main() {
    int terms;

    // Prompt the user for input
    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    // Call the function to generate Fibonacci series
    generateFibonacci(terms);

    return 0;
}
