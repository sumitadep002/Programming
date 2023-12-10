/*
 Write function to check whether given year is leap or not. Write another function to print 
number of days in given month
*/
#include <stdio.h>
#include <stdbool.h>

bool is_leap_year(int year) {
    if (year % 400 == 0) {
        return true;
    } else if (year % 100 == 0) {
        return false;
    } else if (year % 4 == 0) {
        return true;
    } else {
        return false;
    }
}

int days_in_month(int month, int year) {
    switch (month) {
        case 2:
            return is_leap_year(year) ? 29 : 28;
        case 4:
        case 6:
        case 9:
        case 11:
            return 30;
        default:
            return 31;
    }
}

int main() {
    int year, month;
    printf("Enter a year: ");
    scanf("%d", &year);
    if (is_leap_year(year)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }
    printf("Enter a month (1-12): ");
    scanf("%d", &month);
    printf("Number of days in month %d: %d\n", month, days_in_month(month, year));
    return 0;
}
