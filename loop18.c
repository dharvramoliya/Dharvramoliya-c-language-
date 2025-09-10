#include <stdio.h>

int main() {
    int sexCode, boys = 0, girls = 0;

    printf("Enter sex code for 50 students (1 = Boy, 2 = Girl):\n");

    for(int i = 1; i <= 50; i++) {
        scanf("%d", &sexCode);

        if(sexCode == 1)
            boys++;
        else if(sexCode == 2)
            girls++;
        else
            printf("Invalid code for student %d\n", i);
    }

    printf("Total Boys = %d\n", boys);
    printf("Total Girls = %d\n", girls);

    return 0;
}
