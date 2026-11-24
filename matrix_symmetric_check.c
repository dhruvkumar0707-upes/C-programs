#include <stdio.h>

int main() {
    int n, sym = 1;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);
    int a[n][n];

    printf("Enter matrix elements:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] != a[j][i]) {
                sym = 0;
                break;
            }
        }
    }
    if (sym) printf("Matrix is symmetric\n");
    else printf("Matrix is not symmetric\n");
    return 0;
}
