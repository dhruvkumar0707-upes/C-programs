#include <stdio.h>

int main() {
    int pct;
    printf("Enter percentage (0-100): ");
    scanf("%d", &pct);

    if (pct >= 90 && pct <= 100) {
        printf("Grade A\n");
    } else if (pct >= 80) {
        printf("Grade B\n");
    } else if (pct >= 70) {
        printf("Grade C\n");
    } else if (pct >= 60) {
        printf("Grade D\n");
    } else {
        printf("Grade F\n");
    }
    return 0;
}
