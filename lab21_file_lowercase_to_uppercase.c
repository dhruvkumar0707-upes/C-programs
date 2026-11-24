#include <stdio.h>

int main() {
    FILE *fin = fopen("input.txt", "r");
    if (fin == NULL) {
        printf("Error opening input.txt\n");
        return 1;
    }
    FILE *fout = fopen("output.txt", "w");
    if (fout == NULL) {
        fclose(fin);
        printf("Error opening output.txt\n");
        return 1;
    }

    int ch;
    while ((ch = fgetc(fin)) != EOF) {
        if (ch >= 'a' && ch <= 'z') ch -= 32;
        fputc(ch, fout);
    }
    fclose(fin);
    fclose(fout);
    printf("Converted text written to output.txt\n");
    return 0;
}
