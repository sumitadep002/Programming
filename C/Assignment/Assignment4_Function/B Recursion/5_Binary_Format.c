//Write a function to print a given number in binary format
#include <stdio.h>

void printBinary(int num) {

    if (num > 1) {
        printBinary(num / 2);
    }
    //printf("%d",num%2);
    printf("%d",num % 2);
    
}

// Example usage of the function
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Binary representation of %d is ", num);
    printBinary(num);
    printf("\n");
    return 0;
}
