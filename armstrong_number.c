#include <stdio.h>
#include <math.h>

int main() {
    int n, orig, digits = 0;
    int sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    orig = n;
    int temp = n;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }
    temp = n;
    while (temp > 0) {
        int d = temp % 10;
        int p = 1;
        for (int i = 0; i < digits; i++) p *= d;
        sum += p;
        temp /= 10;
    }
    if (sum == orig) printf("%d is an Armstrong number\n", orig);
    else printf("%d is not an Armstrong number\n", orig);
    return 0;
}
