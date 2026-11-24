#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;
    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += 1.0 / i;
    }
    printf("Harmonic sum = %.4lf\n", sum);
    return 0;
}
