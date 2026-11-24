#include <stdio.h>

int main() {
    int n, k;
    printf("Enter array size and k: ");
    scanf("%d %d", &n, &k);
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    for (int i = 0; i <= n - k; i++) {
        int maxVal = arr[i];
        for (int j = 1; j < k; j++) {
            if (arr[i + j] > maxVal) maxVal = arr[i + j];
        }
        printf("%d ", maxVal);
    }
    printf("\n");
    return 0;
}
