#include <stdio.h>
#include <string.h>

int main() {
    char nm[50] = "PDEU";   
    int i = 0, j, temp;

    j = strlen(nm) - 1;

    while(i < j) {
        temp = nm[i];
        nm[i] = nm[j];
        nm[j] = temp;
        i++;
        j--;
    }

    printf("Reversed string: %s\n", nm);
    return 0;
}
