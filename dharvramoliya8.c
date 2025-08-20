#include <stdio.h>

int main() {
    float dollars, rupees;
    const float conversionRate = 48.0;

    // Ask user to enter amount in dollars
    printf("Enter amount in dollars: ");
    scanf("%f", &dollars);

    // Convert to rupees
    rupees = dollars * conversionRate;

    // Display result
    printf("%.2f dollars = %.2f rupees\n", dollars, rupees);

    return 0;
}
