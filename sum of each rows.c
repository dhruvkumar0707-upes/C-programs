#include <stdio.h>

int main()
{
    int a[3][3] = {{1, 9, 3},{47, 56, 6}, {7, 2, 9}};
    int sum[3]={0};
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum[i]=sum[i]+a[i][j];
        }
    }
    for(i=0;i<3;i++)
    {
        printf("Sum of row %d = %d\n", i + 1, sum[i]);
    }
    return 0;
}