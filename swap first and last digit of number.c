#include <stdio.h>
int main()
{
    int n,first,last,x=1;

    printf("Enter a number: ");
    scanf("%d", &n);
    last=n%10;
    while(n/x>=10)
    {
        x=x*10;
    }
    first=n/x;
    n=n-first*x-last;
    n=n+last*x+first;
    printf("After swapping = %d", n);
    return 0;
}