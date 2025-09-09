#include <stdio.h>

int main() {
    int i, n, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(i = 1; i <= n*2; i=i+2) {
        sum = sum + i;   
    }

    printf("Sum of first %d odd numbers = %d\n", n, sum);
    return 0;
}
