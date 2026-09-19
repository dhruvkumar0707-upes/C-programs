#include <stdio.h>

int main()
{
    int a[5]={4,5,8,9,2};
    int i, even = 0, odd = 0;
    for(i = 0; i < 5; i++)
    {
        if(a[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("Even numbers = %d\n", even);
    printf("Odd numbers = %d\n", odd);
    return 0;
}