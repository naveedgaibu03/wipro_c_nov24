#include <stdio.h>

int main() {
    char weather1, weather2, weather3;

    printf("Enter the weather conditions (r for raining, s for sunny, c for cloudy):\n");
    printf("Weather 1: ");
    scanf(" %c", &weather1);
    printf("Weather 2: ");
    scanf(" %c", &weather2);
    printf("Weather 3: ");
    scanf(" %c", &weather3);

    // Condition 1: Only sunny
    if (weather1 == 's' && weather2 != 'r' && weather3 != 'c') {
        printf("You can go out. It's only sunny.\n");
    }
    // Condition 2: Sunny and raining
    else if ((weather1 == 's' && weather2 == 'r') || (weather1 == 'r' && weather2 == 's')) {
        printf("You can go out. It's sunny and raining.\n");
    } else {
        printf("You cannot go out under these weather conditions.\n");
    }

    return 0;
}
