#include <stdio.h>

int main() {
    char filename[100];
    printf("Enter filename: ");
    scanf("%s", filename);

    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    int ch, vowels = 0, consonants = 0;
    while ((ch = fgetc(fp)) != EOF) {
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            char l = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch;
            if (l == 'a' || l == 'e' || l == 'i' || l == 'o' || l == 'u')
                vowels++;
            else
                consonants++;
        }
    }
    fclose(fp);
    printf("Vowels = %d, Consonants = %d\n", vowels, consonants);
    return 0;
}
