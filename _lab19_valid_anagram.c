#include <stdio.h>
#include <string.h>

int main() {
    char s[200], t[200];
    int count[26] = {0};
    printf("Enter two lowercase strings: ");
    scanf("%s %s", s, t);

    if (strlen(s) != strlen(t)) {
        printf("Not Anagram\n");
        return 0;
    }
    for (int i = 0; s[i] != '\0'; i++) {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }
    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            printf("Not Anagram\n");
            return 0;
        }
    }
    printf("Anagram\n");
    return 0;
}
