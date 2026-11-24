#include <stdio.h>
#include <string.h>

int main() {
    char s[500];
    printf("Enter string: ");
    scanf("%s", s);

    int lastIdx[256];
    for (int i = 0; i < 256; i++) lastIdx[i] = -1;

    int maxLen = 0, start = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        unsigned char c = s[i];
        if (lastIdx[c] >= start) {
            start = lastIdx[c] + 1;
        }
        lastIdx[c] = i;
        if (i - start + 1 > maxLen) maxLen = i - start + 1;
    }
    printf("%d\n", maxLen);
    return 0;
}
