/*
Write a function to converts a string of digits into its numeric equivalent i.e. simulate atoi().
int atoi(const char* string);
*/


#include <stdio.h>
#include <stdlib.h>

int my_atoi(const char *str) {
    int result = 0;
    int sign = 1;
    if (*str == '-') {
        sign = -1;
        str++;
    }
    while (*str != '\0') {
        if (*str < '0' || *str > '9') {
            break;
        }
        result = result * 10 + (*str - '0');
        str++;
    }
    return result * sign;
}

int main() {
    const char *str1 = "12345";
    const char *str2 = "-67rfrfrf89";
    const char *str3 = "12a34";
    int num1 = my_atoi(str1);
    int num2 = my_atoi(str2);
    int num3 = my_atoi(str3);
    printf("num1: %d\n", num1);
    printf("num2: %d\n", num2);
    printf("num3: %d\n", num3);
    return 0;
}
