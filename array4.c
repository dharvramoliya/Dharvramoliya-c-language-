#include <stdio.h>
int main() {
    int notes[] = {500,200,100,50,20,10,5,2,1};
    int amount, i, count;
    printf("Enter amount: ");
    scanf("%d",&amount);

    printf("Minimum notes:\n");
    for(i=0;i<9;i++) {
        if(amount >= notes[i]) {
            count = amount / notes[i];
            amount = amount % notes[i];
            printf("%d x %d\n", notes[i], count);
        }
    }
    return 0;
}
