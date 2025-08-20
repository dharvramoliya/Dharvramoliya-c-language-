   #include<stdio.h>

    int main() {
        int a, b, c,p,f,l;
        printf("Enter number");
        scanf("%d%d", &a, &b);
        c = a + b;
        p = a - b;
        l = a * b;
        f = a / b;
        printf("The sum is: %d\n", c);
        printf("The difference is: %d\n", p);
        printf("The product is: %d\n", l);
        printf("The division is: %d\n", f);
        return 0;
    }
