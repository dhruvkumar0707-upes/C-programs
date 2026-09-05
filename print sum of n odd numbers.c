#include<stdio.h>
int main()
{
    int sum,n;
    sum=0;
    int i=1;
    printf("Enter the n odd numbers to sum:");
    scanf("%d",&n);
    while(i<=2*n)
    {
        if(i%2!=0)
        {
            sum+=i;
        }
        i++;
    }
    printf("Sum of the n odd numbers is: %d", sum);
    return 0;
}