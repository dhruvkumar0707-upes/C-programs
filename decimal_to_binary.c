#include <stdio.h>

int main() {
    int n, rem;
    long long bin = 0, place = 1;
    printf("Enter a decimal number: ");
    scanf("%d", &n);

    int temp = n;
    while (temp > 0) {
        rem = temp % 2;
        bin += rem * place;
        place *= 10;
        temp /= 2;
    }
    printf("Binary representation of %d = %lld\n", n, bin);
    return 0;
}
