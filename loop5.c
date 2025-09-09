#include <stdio.h>

int main() {
    int i, n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("First %d odd numbers are:\n", n);
    for(i = 1; i <= n*2; i=i+2) {
        printf("%d ",i);
    }
    return 0;
}
