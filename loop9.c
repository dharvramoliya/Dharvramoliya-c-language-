#include <stdio.h>

int main() {
    int i, n, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(i = 2; i <= n*2; i=i+2) {
        sum = sum + i;   
    }

    printf("Sum of first %d even numbers = %d\n", n, sum);
    return 0;
}
