#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int isPal = 1;
    printf("Enter a string: ");
    scanf("%s", str);

    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            isPal = 0;
            break;
        }
    }
    if (isPal) printf("Palindrome string\n");
    else printf("Not a palindrome string\n");
    return 0;
}
