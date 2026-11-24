#include <stdio.h>

int main() {
    int n, orig, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    orig = n;
    while (n > 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    if (orig == rev) printf("%d is a palindrome\n", orig);
    else printf("%d is not a palindrome\n", orig);
    return 0;
}
