#include <stdio.h>

int main() {
    float dollars, rupees, pounds;
    float dollarToRupee = 48.0;
    float poundToRupee = 70.0;

    // Input amount in Dollars
    printf("Enter amount in Dollars: ");
    scanf("%f", &dollars);
    
    // Convert Dollars to Rupees
    rupees = dollars * dollarToRupee;

    // Convert Rupees to Pounds
    pounds = rupees / poundToRupee;

    // Output result
    printf("Equivalent amount in Pounds: £%.2f\n", pounds);

    return 0;
}
