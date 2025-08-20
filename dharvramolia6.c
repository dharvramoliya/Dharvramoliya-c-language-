#include <stdio.h>

int main() {
    int hours, minutes;

    // Input hours
    printf("Enter time in hours: ");
    scanf("%d", &hours);

    // Convert hours to minutes
    minutes = hours * 60;

    // Display result
    printf("%d hours = %d minutes\n", hours, minutes);

    return 0;
}
