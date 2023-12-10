#include <stdio.h>

int getDayOfWeek(int day, int month, int year) {
    // Adjust the month and year for Zeller's Congruence formula
    if (month < 3) {
        month += 12;
        year--;
    }

    int century = year / 100;
    int yearOfCentury = year % 100;

    // Zeller's Congruence formula
    int h = (day + ((13 * (month + 1)) / 5) + yearOfCentury + (yearOfCentury / 4) + (century / 4) - (2 * century)) % 7;

    // Adjust the result to match the weekday format (0 for Saturday, 1 for Sunday, ..., 6 for Friday)
    if (h < 0) {
        h += 7;
    }

    return h;
}

int main() {
    int day, month, year,h;

    printf("Enter the date (day month year): ");
    scanf("%d %d %d", &day, &month, &year);

    // Validate the input date
    if (day < 1 || day > 31 || month < 1 || month > 12 || year < 1) {
        printf("Invalid date!\n");
        return 0;
    }

    // Array to store the names of weekdays
    char *weekdays[] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};

    // Adjust the month and year for Zeller's Congruence formula
    if (month < 3) {
        month += 12;
        year--;
    }

    int century = year / 100;
    int yearOfCentury = year % 100;

    // Zeller's Congruence formula
    h = (day + ((13 * (month + 1)) / 5) + yearOfCentury + (yearOfCentury / 4) + (century / 4) - (2 * century)) % 7;

    // Adjust the result to match the weekday format (0 for Saturday, 1 for Sunday, ..., 6 for Friday)
    if (h < 0) {
        h += 7;
    }


    printf("The day of the week for %02d-%02d-%04d is %s.\n", day, month, year, weekdays[h]);

    return 0;
}

