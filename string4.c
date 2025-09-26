#include<stdio.h>
int main()
{
    char nm[50]="pdeu";
    int i=0;
    while( nm[i]!='\0')
    {
        if(nm[i]>='a' && nm[i]<='z')
         nm[i]-=32;
        i++;   
    };
    printf("%s\n",nm);
    return 0;
}
