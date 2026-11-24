#include <stdio.h>

int main() {
    char str[500];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int capNext = 1;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '.' || str[i] == '!' || str[i] == '?') {
            capNext = 1;
        } else if (str[i] >= 'a' && str[i] <= 'z') {
            if (capNext) {
                str[i] -= 32;
                capNext = 0;
            }
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            if (!capNext) {
                str[i] += 32;
            } else {
                capNext = 0;
            }
        }
    }
    printf("%s", str);
    return 0;
}
