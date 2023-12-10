/*
9. Write a program to display number of days in the given month and year using 
a. Using If else ladder. 
b. Using logical operators.
*/

#include <stdio.h>

int main() {
    int year, month, days;
    printf("Enter year: ");
    scanf("%d", &year);
    printf("Enter month (1-12): ");
    scanf("%d", &month);

    if (month == 2) {
        if (year % 4 == 0) {
            if (year % 100 != 0) {
                days = 29;
            }
            else {
                if (year % 400 == 0) {
                    days = 29;
                }
                else {
                    days = 28;
                }
            }
        }
        else {
            days = 28;
        }
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11) {
        days = 30;
    }
    else {
        days = 31;
    }

    printf("Number of days in the month: %d", days);

    return 0;
}
