#include <stdio.h>

int main() {
    int i;
    printf("First 10 odd numbers are:\n");
    for(i = 1; i <= 20; i=i+2) {
        printf("%d ",i);
    }
    return 0;
}
