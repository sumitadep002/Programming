// Write a function to calculate power using recursion
#include <stdio.h>

unsigned long int power(int base, int exponent) {
    if (exponent == 0) {
        return 1;
    } else {
        return base * power(base, exponent - 1);
    }
}

int main() {
    int base;
    int exponent;
    printf("Enter the base: ");
    scanf("%d", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exponent);
    printf("%d^%d = %lu\n", base, exponent, power(base, exponent));
    return 0;
}
