#include <stdio.h>

int main() {
    int r, c;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    int a[r][c];

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    printf("Diagonal traversal: ");
    for (int d = 0; d < r + c - 1; d++) {
        for (int i = 0; i < r; i++) {
            int j = d - i;
            if (j >= 0 && j < c) {
                printf("%d ", a[i][j]);
            }
        }
    }
    printf("\n");
    return 0;
}
