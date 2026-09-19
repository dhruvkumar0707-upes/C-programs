#include <stdio.h>

int main()
{
    int a,b,i;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    i=a;
    while(i >= 1)
    {
        if(a%i==0&&b%i==0)
        {
            printf("HCF=%d",i);
            break;
        }
        i--;
    }
    return 0;
}