#include <stdio.h>

int main() {
    char str[200];
    int vowels = 0, consonants = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            char low = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch;
            if (low == 'a' || low == 'e' || low == 'i' || low == 'o' || low == 'u')
                vowels++;
            else
                consonants++;
        }
    }
    printf("Vowels = %d, Consonants = %d\n", vowels, consonants);
    return 0;
}
