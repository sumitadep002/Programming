/*
Write a program to display number of days in the given month and year using switch case 
statement
*/
#include <stdio.h>
int main() {
    int year, month, days;
    printf("Enter year: ");
    scanf("%d", &year);
    printf("Enter month (1-12): ");
    scanf("%d", &month);

    switch (month) {
        case 2:
            if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
                days = 29;
            }
            else {
                days = 28;
            }
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            days = 30;
            break;
        default:
            days = 31;
            break;
    }

    printf("Number of days in the month: %d\n", days);

    return 0;
}
