#include<stdio.h>
int main()
{
    int s1,s2,s3;
    printf("Enter the first side 1:");
    scanf("%d",&s1);
    printf("Enter the second side 2:");
    scanf("%d",&s2);
    printf("Enter the third side 3:");
    scanf("%d",&s3);
    if(s1==s2 && s2==s3)
    {
        printf("triangle is equillateral");
    }
    else if(s1==s2 || s2==s3 || s3==s2)
    {
        printf("Triangle is isoscles");
    }
    else 
    {
        printf("Triangle is scalene");
    }
    return 0;
}