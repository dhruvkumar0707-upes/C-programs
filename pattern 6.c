#include<stdio.h>
int main()
{
    int a,n;
    for(a=1;a<=5;a=a+2)
    {
        for(n=1;n<=a;n++)
        {
            printf("*\n");
        }
        printf("\n");
    }
    for(a=3;a>=1;a=a-2)
    {
        for(n=1;n<=a;n++)
        {
            printf("*\n");
        }
        printf("\n");
    }
    return 0;
}