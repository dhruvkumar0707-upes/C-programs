#include <stdio.h>

int main() {
    int base, exp;
    long long res = 1;
    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exp);

    for (int i = 0; i < exp; i++) {
        res *= base;
    }
    printf("%d^%d = %lld\n", base, exp, res);
    return 0;
}
