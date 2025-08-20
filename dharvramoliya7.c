#include <stdio.h>

int main() {
    int minutes, hours, remainingMinutes;

    // Input total minutes
    printf("Enter total minutes: ");
    scanf("%d", &minutes);

    // Convert to hours and minutes
    hours = minutes / 60;
    remainingMinutes = minutes % 60;

    // Display result
    printf("%d minutes = %d hour(s) and %d minute(s)\n", minutes, hours, remainingMinutes);

    return 0;
}
