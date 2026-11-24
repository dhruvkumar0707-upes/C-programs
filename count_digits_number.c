#include <stdio.h>

int main() {
    long long n;
    int count = 0;
    printf("Enter an integer: ");
    scanf("%lld", &n);

    if (n == 0) count = 1;
    if (n < 0) n = -n;
    while (n > 0) {
        count++;
        n /= 10;
    }
    printf("Total digits = %d\n", count);
    return 0;
}
