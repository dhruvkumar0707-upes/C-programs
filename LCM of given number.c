#include<stdio.h>
int main()
{
    int a,b,lcm,i=1;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    while(1)
    {
        if(i%a==0&&i%b==0)
        {
            printf("LCM is=%d ",i);
            break;
        }
        i++;
    }
        return 0; 
    }