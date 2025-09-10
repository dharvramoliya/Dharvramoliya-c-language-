#include <stdio.h>

int main() {
    int num, count = 0;

    printf("Enter 50 numbers:\n");

    for(int i = 1; i <= 50; i++) {
        scanf("%d", &num);

        if(num % 5 == 0) {
            count++;
        }
    }

    printf("Total numbers divisible by 5 = %d\n", count);

    return 0;
}
