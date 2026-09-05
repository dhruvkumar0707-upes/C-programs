#include<stdio.h>
int main()
{
    int s,h,m;
    printf("Enter the time in seconds:");
    scanf("%d",&s);
    h=s/3600;
    m=(s%3600)/60;
    s=s%60;
    printf("Time is: %d:%d:%d",h,m,s);
    return 0;
}