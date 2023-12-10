#include <stdio.h>

int a, b;

int sum(int a, int b) {
    return (a + b);
}

int mul(int a, int b) {
    return (a * b);
}

int sub(int a, int b) {
    return (a - b);
}

int wrapper(int (*fun)(int a, int b)) {
    return fun(a, b);
}

int main() {
    printf("Enter a, b: ");
    scanf("%d %d", &a, &b);
    printf("%d + %d = %d\n", a, b, wrapper(sum));
    printf("%d * %d = %d\n", a, b, wrapper(mul));
    printf("%d - %d = %d\n", a, b, wrapper(sub));
    return 0;
}

