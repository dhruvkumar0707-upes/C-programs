#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Eneter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("The value of a is %d\n",a);
    printf("The value of b is %d\n",b);
    return 0;
}