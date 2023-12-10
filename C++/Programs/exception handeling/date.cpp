#include <iostream>
#include <stdexcept>

using namespace std;

int main() {
    int day, month, year;

    try {
        // Input day, month, and year
        cout << "Enter day (1-31): ";
        cin >> day;
        if (day < 1 || day > 31) {
            throw out_of_range("Day is out of range (1-31)");
        }

        cout << "Enter month (1-12): ";
        cin >> month;
        if (month < 1 || month > 12) {
            throw out_of_range("Month is out of range (1-12)");
        }

        cout << "Enter year: ";
        cin >> year;
        if (year < 0) {
            throw invalid_argument("Year cannot be negative");
        }

        // If input is valid, display the date
        cout << "Entered date: " << day << "/" << month << "/" << year << endl;
    } catch (const out_of_range& e) {
        cerr << "Invalid input: " << e.what() << endl;
    } catch (const invalid_argument& e) {
        cerr << "Invalid input: " << e.what() << endl;
    } catch (...) {
        cerr << "An unexpected error occurred." << endl;
    }

    return 0;
}

