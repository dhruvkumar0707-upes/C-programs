#include <stdio.h>

int main() {
    int n, evenSum = 0, oddSum = 0;
    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) evenSum += i;
        else oddSum += i;
    }
    printf("Even sum = %d, Odd sum = %d\n", evenSum, oddSum);
    return 0;
}
