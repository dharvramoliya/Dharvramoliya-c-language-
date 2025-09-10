#include <stdio.h>

int main() {
    int num, sum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);
    for(; num > 0; num = num / 10) {
        digit = num % 10;   // last digit
        sum = sum + digit;  // add to sum
    }

    printf("Summation of digits = %d\n", sum);

    return 0;
}
