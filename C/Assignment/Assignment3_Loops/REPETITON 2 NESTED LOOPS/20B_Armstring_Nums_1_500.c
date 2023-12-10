/*
b. Armstrong Numbers between 1 to 500
*/
#include <stdio.h>

int main() {
    int armstrong = 0, temp = 0, remainder = 0;
    for (int i = 100; i <= 500; i++) {
        armstrong = 0;
        for (temp = i; temp != 0; temp /= 10) {
            remainder = temp % 10;
            armstrong = armstrong + remainder * remainder * remainder;
        }
        if (armstrong == i) {
            printf("%d ", i);
        }
    }
    return 0;
}