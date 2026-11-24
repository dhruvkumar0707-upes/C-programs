#include <stdio.h>

int main() {
    char str[200];
    int len = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[len] != '\0' && str[len] != '\n') {
        len++;
    }
    printf("Length of string = %d\n", len);
    return 0;
}
