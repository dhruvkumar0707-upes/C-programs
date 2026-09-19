#include <stdio.h>
int main()
{
    int a[3][3]={{3,6,8},{9,23,6}};
    int r, c, i, j;
    printf("The matrix is:\n");

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}