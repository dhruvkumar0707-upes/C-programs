#include<stdio.h>
int main()
{
    int a,pattrn;
    printf(" ");
    for(a=5;a>=1;a--)
    {
        for(pattrn=1;pattrn<=a;pattrn++)
        {
            printf("*");
        }
        {
        printf(" \n ");
        }
    }
    return 0;
}