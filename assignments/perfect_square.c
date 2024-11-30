#include <stdio.h>
#include <math.h>

int isPerfectSquare(int num) {
    if (num < 0) return 0; // Negative numbers are not perfect squares

    int sqrtValue = (int)sqrt(num); // Compute square root and convert to integer
    return (sqrtValue * sqrtValue == num); // Check if square of sqrtValue equals the number
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPerfectSquare(num)) {
        printf("%d is a perfect square.\n", num);
    } else {
        printf("%d is not a perfect square.\n", num);
    }

    return 0;
}
