#include <stdio.h>

int main() {
    int low, high;
    printf("Enter range (low high): ");
    scanf("%d %d", &low, &high);

    for (int num = low; num <= high; num++) {
        if (num < 2) continue;
        int prime = 1;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                prime = 0;
                break;
            }
        }
        if (prime) printf("%d ", num);
    }
    printf("\n");
    return 0;
}
