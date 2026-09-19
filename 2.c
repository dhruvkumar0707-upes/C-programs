#include <stdio.h>
int main()
{
    int i,n;
    float sum=0;
    printf("Enter n: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        sum=sum+(float)(2*i)/(4*i-1);
    }
    printf("Sum = %f", sum);
    return 0;
}