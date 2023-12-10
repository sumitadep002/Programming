/*
Write a function to convert a number to its roman equivalent. Also write a function to convert a
roman number to decimal equivalent.
*/


#include <stdio.h>
#include <string.h>
#include<stdlib.h>

// Function to convert a number to its Roman equivalent
char* intToRoman(int num) {
    char* roman[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char* romanNumeral = malloc(16 * sizeof(char));
    int i = 0;
    while (num > 0) {
        if (num >= values[i]) {
            strcat(romanNumeral, roman[i]);
            num -= values[i];
        } else {
            i++;
        }
    }
    return romanNumeral;
}

// Function to convert a Roman number to its decimal equivalent
int romanToInt(char* s) {
    int i, j, decimal = 0;
    int length = strlen(s);

    for (i = 0; i < length; i++) {
        if (s[i] == 'I') {
            if (s[i + 1] == 'V') {
                decimal += 4;
                i++;
            } else if (s[i + 1] == 'X') {
                decimal += 9;
                i++;
            } else {
                decimal++;
            }
        } else if (s[i] == 'X') {
            if (s[i + 1] == 'L') {
                decimal += 40;
                i++;
            } else if (s[i + 1] == 'C') {
                decimal += 90;
                i++;
            } else {
                decimal += 10;
            }
        } else if (s[i] == 'C') {
            if (s[i + 1] == 'D') {
                decimal += 400;
                i++;
            } else if (s[i + 1] == 'M') {
                decimal += 900;
                i++;
            } else {
                decimal += 100;
            }
        } else if (s[i] == 'V') {
            decimal += 5;
        } else if (s[i] == 'L') {
            decimal += 50;
        } else if (s[i] == 'D') {
            decimal += 500;
        } else if (s[i] == 'M') {
            decimal += 1000;
        }
    }
    return decimal;
}

int main() {
    // Test intToRoman()
    int n ;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("%d in Roman numerals is %s\n", n, intToRoman(n));

    // Test romanToInt()
    char roman[10];
    printf("Enter the roman number: ");
    scanf("%s",roman);
    printf("%s in decimal is %d\n", roman, romanToInt(roman));
    return 0;
}
