//Write a function to print a given number in hexadecimal format. 
#include <stdio.h>

void printHexadecimal(int num) {
    if (num > 15) {
        printHexadecimal(num / 16);
    }
    int remainder = num % 16;
    if (remainder < 10) {
        printf("%d", remainder);
    } else {
        printf("%c", remainder - 10 + 'A');
    }
}

// Example usage of the function
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Hexadecimal representation of %d is ", num);
    printHexadecimal(num);
    printf("\n");
    return 0;
}
