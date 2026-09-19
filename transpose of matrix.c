#include <stdio.h>
int main()
{
    int a[2][3] = {{1, 76, 3},{4, 3, 6}};
    int i, j;
    printf("Transpose of matrix is:\n");
    for(j = 0; j < 3; j++)
    {
        for(i = 0; i < 2; i++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}