#include<stdio.h>
int main()
{
    int a;
    printf("enter a number to check:");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("The NUmber is even");
    }
    else
    {
        printf("The number is odd");
    }
    return 0;
}