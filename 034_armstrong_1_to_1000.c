#include <stdio.h>

int main() {
    printf("Armstrong numbers between 1 and 1000:\n");
    for (int num = 1; num <= 1000; num++) {
        int temp = num, sum = 0, digits = 0;
        while (temp > 0) { digits++; temp /= 10; }
        temp = num;
        while (temp > 0) {
            int d = temp % 10, p = 1;
            for (int i = 0; i < digits; i++) p *= d;
            sum += p;
            temp /= 10;
        }
        if (sum == num) printf("%d ", num);
    }
    printf("\n");
    return 0;
}
