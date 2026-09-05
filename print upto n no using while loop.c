#include<stdio.h>
int main()
{
    int num,n;
    num=1;
    printf("Enter the number to which you want to print:");
    scanf("%d",&n);
    while(num<=n)
    {
        printf("%d\n",num);
        num++;
    }
    return 0;
}