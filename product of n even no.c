#include<stdio.h>
int main()
{
    int product=1,num;
    int i=1;
    printf("Enter the no to product of even no:");
    scanf("%d",&num);
    while(i<=num)
    {
        if(i%2==0)
        {
            product=product*i;
        }
        i++;
    }
    printf("Product of the even numbers is: %d", product);
    return 0;
}