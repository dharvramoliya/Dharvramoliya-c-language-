#include <stdio.h>

int main() {
    int num, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Digits are: ");
    for(; num > 0; num = num / 10) {
        digit = num % 10;
        printf("%d ", digit);
    }

    return 0;
}
