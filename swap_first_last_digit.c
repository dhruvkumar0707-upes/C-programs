#include <stdio.h>

int main() {
    int n, first, last, digits = 0, pow10 = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 10) {
        printf("Swapped number = %d\n", n);
        return 0;
    }
    last = n % 10;
    int temp = n;
    while (temp >= 10) {
        temp /= 10;
        pow10 *= 10;
    }
    first = temp;
    int middle = (n % pow10) / 10;
    int swapped = last * pow10 + middle * 10 + first;
    printf("Swapped number = %d\n", swapped);
    return 0;
}
