#include<stdio.h>
int main()
{
    int ar[5]={0,56,-7,9,4};
    int i,positive=0,negative=0,zero=0;
for(i = 0; i < 5; i++)
    {
        if(ar[i] > 0)
        {
            positive++;
        }
        else if(ar[i] < 0)
        {
            negative++;
        }
        else
        {
            zero++;
        }
    }
    printf("Positive numbers are = %d\n",positive);
    printf("Negative numbers are = %d\n",negative);
    printf("Zero elements are = %d\n",zero);

    return 0;
}