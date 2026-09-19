#include<stdio.h>
int main()
{
    int a[4]={3,6,8,9};
    int max,min,i;
    max=a[0];
    min=a[0];
    for(i=1;i<4;i++)
    {
        if(a[i]>max) 
        {
            max=a[i];
        }
        if(a[i]<min)
        {
            min=a[i];
        }
    }
            printf("the maximum value is=%d",max);
            printf("\nThe minimum value is=%d",min);
return 0;
}