#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, d, r1, r2;
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    d = b * b - 4 * a * c;

    if (d > 0) {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("Real and distinct roots: %.2lf and %.2lf\n", r1, r2);
    } else if (d == 0) {
        r1 = -b / (2 * a);
        printf("Real and equal roots: %.2lf and %.2lf\n", r1, r1);
    } else {
        double real = -b / (2 * a);
        double imag = sqrt(-d) / (2 * a);
        printf("Complex roots: %.2lf + %.2lfi and %.2lf - %.2lfi\n", real, imag, real, imag);
    }
    return 0;
}
