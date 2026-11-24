#include <stdio.h>

int main() {
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);
    int arr[n];
    int seen[100001] = {0};

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (seen[arr[i]]) {
            printf("%d\n", arr[i]);
            return 0;
        }
        seen[arr[i]] = 1;
    }
    return 0;
}
