#include <stdio.h>

int main() {
    float rupees, dollars;
    float conversionRate = 48.0;

    // Input amount in Rupees
    printf("Enter amount in Rupees: ");
    scanf("%f", &rupees);

    // Convert to Dollars
    dollars = rupees / conversionRate;

    // Output result
    printf("Equivalent amount in Dollars: $%.2f\n", dollars);

    return 0;
}
