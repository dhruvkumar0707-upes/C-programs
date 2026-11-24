#include <stdio.h>

int main() {
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    int maxSoFar = arr[0], currMax = arr[0];
    for (int i = 1; i < n; i++) {
        if (currMax + arr[i] > arr[i]) currMax = currMax + arr[i];
        else currMax = arr[i];
        if (currMax > maxSoFar) maxSoFar = currMax;
    }
    printf("%d\n", maxSoFar);
    return 0;
}
