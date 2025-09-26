#include<stdio.h>
int main()
{
    char nm[50]="PDEU";
    char nm2[50];
    int i=0;
    while( nm[i]!='\0')
    {
        nm2[i]=nm[i];
        i++;

    }; nm2[i]='\0';
     
    printf("%s\n",nm);
    printf("%s\n",nm2);
return 0;
}
