#include <stdio.h>

int main() {
    int n, k;
    printf("Enter array size and k: ");
    scanf("%d %d", &n, &k);
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    int winSum = 0;
    for (int i = 0; i < k; i++) winSum += arr[i];
    int maxSum = winSum;

    for (int i = k; i < n; i++) {
        winSum += arr[i] - arr[i - k];
        if (winSum > maxSum) maxSum = winSum;
    }
    printf("%d\n", maxSum);
    return 0;
}
