/*
Write a program to make your own command like "ls" which will take two arguments and print 
subtraction of them
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if(argc != 3) {
        printf("sub command requires exactly two arguments.\n");
        return 1;
    }

    char *endptr;
    int num1 = strtol(argv[1], &endptr, 10);
    if (*endptr != '\0') {
        printf("sub command requires integer arguments.\n");
        return 1;
    }

    int num2 = strtol(argv[2], &endptr, 10);
    if (*endptr != '\0') {
        printf("sub command requires integer arguments.\n");
        return 1;
    }

    int result = num1 - num2;
    printf("result: %d\n", result);
    return 0;
}