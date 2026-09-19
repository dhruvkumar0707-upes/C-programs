#include<stdio.h>
int main()
{
    int num,i=2;
    printf("Enter the number:");
    scanf("%d",&num);
    while(i<num)
    {
        if(num%i==0)
        {
            break;
        }
        i++;
    }
    if(i==num)  
    {
        printf("The number is prime");
    }
    else
    {
        printf("The number is not prime");
    }
    return 0;
}