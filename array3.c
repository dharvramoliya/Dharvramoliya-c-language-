#include <stdio.h>
int main() {
    int arr[5], i, c, t;
    printf("Enter 5 values:\n");
    for(i=0;i<5;i++)
        scanf("%d",&arr[i]);

     do { c=0;
        for(i=0;i<=3;i++) {
            if(arr[i] > arr[i+1]) {
                t = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = t;
            }
        }
    }while(c);

    printf("Sorted array:\n");
    for(i=0;i<5;i++)
        printf("%d ",arr[i]);
    return 0;
}
