#include <stdio.h>

int main() {
    int n, orig, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    orig = n;
    while (n > 0) {
        int d = n % 10, fact = 1;
        for (int i = 1; i <= d; i++) fact *= i;
        sum += fact;
        n /= 10;
    }
    if (sum == orig) printf("%d is a Strong number\n", orig);
    else printf("%d is not a Strong number\n", orig);
    return 0;
}
