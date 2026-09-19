#include <stdio.h>
int main()
{
    int n,a[10],i,j,size = 0;
    int count, max = 0, most;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n!=0)
    {
        a[size]=n%10;
        n=n/10;
        size++;
    }
    for(i=0;i<size;i++)
    {
        count=0;
        for(j=0;j<size;j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
        }
        if(count>max)
        {
            max=count;
            most=a[i];
        }
    }
    printf("Most occurring digit = %d\n", most);
    printf("It occurs %d times", max);
    return 0;
}