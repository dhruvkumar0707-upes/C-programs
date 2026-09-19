`#include<stdio.h>
int main()
{
    int a[5]={4,9,12,7,5};
    int i,temp;
    for(i = 0; i < 5 / 2; i++)
    {
        temp = a[i];
        a[i] = a[4 - i];
        a[4 - i] = temp;
    }

    printf("Reversed array:\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}