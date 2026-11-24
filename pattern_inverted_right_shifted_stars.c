#include <stdio.h>

int main() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int s = 1; s < i; s++) {
            printf(" ");
        }
        for (int j = i; j <= n; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
