#include<stdio.h>
int main()
{
    int a[4]={5,7,8,3};
    int b[4]={2,56,8,9};
    int c[4]={0,0,0,0};
    int i;
    for(i = 0; i < 4; i++)
    {
        c[i] = a[i];
    }
    for(i = 0; i < 4; i++)
    {
        c[i + 4] = b[i];
    }
    printf("Merged elements in array:\n");

    for(i = 0; i < 8; i++)
    {
        printf("%d ", c[i]);
    }
    return 0;
}