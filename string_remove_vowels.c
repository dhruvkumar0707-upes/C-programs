#include <stdio.h>

int main() {
    char str[200], res[200];
    int j = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        char c = str[i];
        char l = (c >= 'A' && c <= 'Z') ? c + 32 : c;
        if (l != 'a' && l != 'e' && l != 'i' && l != 'o' && l != 'u') {
            res[j++] = c;
        }
    }
    res[j] = '\0';
    printf("Without vowels: %s", res);
    return 0;
}
