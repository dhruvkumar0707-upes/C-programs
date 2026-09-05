#include<stdio.h>
int main() {
    int factorial = 1, num;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num > 0) {
        factorial=factorial*num;
        num--;
    }
    printf("Factorial is: %d", factorial);
    return 0;
}