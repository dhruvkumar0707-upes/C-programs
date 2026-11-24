#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;
    printf("Enter number of terms n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i == 1) sum += 1.0;
        else sum += (double)(2 * i - 1) / (2 * i);
    }
    printf("Sum of series = %.4lf\n", sum);
    return 0;
}
