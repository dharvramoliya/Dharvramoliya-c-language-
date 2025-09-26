#include<stdio.h>
int main()
{
    char nm[5]="PDEU";
    int i=0;
    while( nm[i]!='\0')
    {
        i++;
    };
    printf("%s\n",nm);
    printf("%d",i);

    return 0;
}
