#include<stdio.h>
int main()
{
    int n,armst, digit, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    armst=n;
    while(n>0)
    {
        digit=n%10;
        sum=sum+digit*digit*digit;
        n=n/10;
    }
    if(sum==armst)
        printf("Armstrong number");
    else
        printf("Not an Armstrong number");
    return 0;
}