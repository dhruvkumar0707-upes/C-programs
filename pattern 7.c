#include <stdio.h>

int main()
{
    int a,n;
    for(a=1;a<=9;a=a+2)
    {
        for(n=1;n<=a;n++)
        {
            printf("*");
        }
        printf("\n");
    }
   for(a=7;a>=1;a=a-2)
    {
        for(n=1;n<=a;n++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}