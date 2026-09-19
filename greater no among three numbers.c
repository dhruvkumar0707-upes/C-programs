#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter the three numbers:");
    scanf("%d%d%d",&num1,&num2,&num3);
    if(num1>num2&&num1>num3)
    {
        printf("Number 1 is greater");
    }
    else if (num2>num1&&num2>num3)
    {
        printf("Number 2 is greater");
    }
    else if(num3>num1&&num3>num2)
    {
        printf("Number 3 is greater");
    }
    else if (num1=num2=num3)
    {
        printf("All Numbers Are Equal");
    }
    else 
    {
        printf("Enter a valid input");
    }
    return 0;}