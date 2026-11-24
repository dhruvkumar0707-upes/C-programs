#include <stdio.h>

int main() {
    long long bin, rev = 0, place = 1, comp = 0;
    printf("Enter a binary number: ");
    scanf("%lld", &bin);

    if (bin == 0) {
        printf("1's complement = 1\n");
        return 0;
    }
    while (bin > 0) {
        int bit = bin % 10;
        int flipped = (bit == 0) ? 1 : 0;
        comp += flipped * place;
        place *= 10;
        bin /= 10;
    }
    printf("1's complement = %lld\n", comp);
    return 0;
}
