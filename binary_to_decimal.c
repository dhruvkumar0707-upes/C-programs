#include <stdio.h>

int main() {
    long long bin;
    int dec = 0, base = 1;
    printf("Enter a binary number: ");
    scanf("%lld", &bin);

    while (bin > 0) {
        int last = bin % 10;
        dec += last * base;
        base *= 2;
        bin /= 10;
    }
    printf("Decimal equivalent = %d\n", dec);
    return 0;
}
