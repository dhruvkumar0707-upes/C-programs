#include <stdio.h>

int main() {
    char s1[100], s2[100];
    int i = 0, equal = 1;
    printf("Enter first string: ");
    scanf("%s", s1);
    printf("Enter second string: ");
    scanf("%s", s2);

    while (s1[i] != '\0' || s2[i] != '\0') {
        if (s1[i] != s2[i]) {
            equal = 0;
            break;
        }
        i++;
    }
    if (equal) printf("Strings are equal\n");
    else printf("Strings are not equal\n");
    return 0;
}
