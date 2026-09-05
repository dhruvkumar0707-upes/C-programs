#include<stdio.h>
int main()
{
    int a,b;
    char c;
    printf("enter the two numbers:");
    scanf("%d %d",&a,&b);
    printf("enter the operation (+,-,*,/):");
    scanf(" %c",&c);
    switch(c)
    {
        case '+':
        printf("sum=%d",a+b);
        break;
        case '-':
        printf("subtraction=%d",a-b);
        break;
        case '*':
        printf("product=%d",a*b);
        break;
        case '/':
        printf("div=%d",a/b);
        break;
        default:
        printf("invalid INPUT");
    }
    return 0;
}