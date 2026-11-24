#include <stdio.h>

int main() {
    int m, n;
    printf("Enter sizes m and n: ");
    scanf("%d %d", &m, &n);
    int a[m], b[n], merged[m + n];

    for (int i = 0; i < m; i++) scanf("%d", &a[i]);
    for (int j = 0; j < n; j++) scanf("%d", &b[j]);

    int i = 0, j = 0, k = 0;
    while (i < m && j < n) {
        if (a[i] <= b[j]) merged[k++] = a[i++];
        else merged[k++] = b[j++];
    }
    while (i < m) merged[k++] = a[i++];
    while (j < n) merged[k++] = b[j++];

    for (int x = 0; x < m + n; x++) printf("%d ", merged[x]);
    printf("\n");
    return 0;
}
