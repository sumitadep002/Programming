/*
Write a function to print a given number in words.
*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>


// Helper function to convert tens digit to string
const char *tens(int n)
{
    switch (n) {
        case 2: return "twenty";
        case 3: return "thirty";
        case 4: return "forty";
        case 5: return "fifty";
        case 6: return "sixty";
        case 7: return "seventy";
        case 8: return "eighty";
        case 9: return "ninety";
        default: return "";
    }
}

// Helper function to convert ones digit to string
const char *ones(int n)
{
    switch (n) {
        case 1: return "one";
        case 2: return "two";
        case 3: return "three";
        case 4: return "four";
        case 5: return "five";
        case 6: return "six";
        case 7: return "seven";
        case 8: return "eight";
        case 9: return "nine";
        default: return "";
    }
}

// Helper function to convert two-digit number to string
const char *two_digits(int n)
{
    if (n < 10) {
        return ones(n);
    } else if (n < 20) {
        switch (n) {
            case 10: return "ten";
            case 11: return "eleven";
            case 12: return "twelve";
            case 13: return "thirteen";
            case 14: return "fourteen";
            case 15: return "fifteen";
            case 16: return "sixteen";
            case 17: return "seventeen";
            case 18: return "eighteen";
            case 19: return "nineteen";
            default: return "";
        }
    } else {
        int tens_digit = n / 10;
        int ones_digit = n % 10;
        if (ones_digit == 0) {
            return tens(tens_digit);
        } else {
            char *result = (char *) malloc(strlen(tens(tens_digit)) + strlen(ones(ones_digit)) + 1);
            strcpy(result, tens(tens_digit));
            strcat(result, " ");
            strcat(result, ones(ones_digit));
            return result;
        }
    }
}

// Function to convert a number to words
void number_to_words(int n)
{
	//check if number is zero
    if (n == 0) {
        printf("zero");
        return;
    }
    
    //if it is negative
    if (n < 0) {
        printf("minus ");
        n = -n;
    }
    
    //if it is single digit
    if (n < 10) {
        printf("%s", ones(n));
    } 
    
    //if it is double digit
    else if (n < 100) {
        printf("%s", two_digits(n));
    }
    
    //if it is tripple digit
    else if (n < 1000) {
        int hundreds_digit = n / 100;
        int tens_digit = n % 100;
        printf("%s hundred", ones(hundreds_digit));
        if (tens_digit != 0) {
            printf(" and ");
            printf("%s", two_digits(tens_digit));
        }
    } else {
        printf("Number is too large to convert to words");
    }
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    number_to_words(n);
    return 0;
}
