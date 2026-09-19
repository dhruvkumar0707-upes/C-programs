#include <stdio.h>
int main()
{
    int a[2][3] = { {1, 9, 3},{4, 55, 6}};
    int i, j, sum = 0;

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            sum = sum + a[i][j];
        }
    }
    printf("Sum of all elements = %d", sum);
    return 0;
}