#include<stdio.h>
int main()
{
    int num,remove,reverse=0;
    printf("Enter the number to reverse:");
    scanf("%d",&num);
    while(num!=0)
    {
        remove=num%10;
        reverse=reverse*10+remove;
        num=num/10;
    }
    printf("Reversed number is:%d",reverse);
    return 0;
}