#include <stdio.h>

int main() {
    int day, month, year;
    printf("Enter date (dd mm yyyy): ");
    scanf("%d %d %d", &day, &month, &year);

    int valid = 1;

    if (month < 1 || month > 12) {
        valid = 0;
    }

    if (day < 1 || day > 31) {
        valid = 0;
    }

    // Check for months with fewer than 31 days
    if (month == 2) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            // Leap year
            if (day > 29) valid = 0;
        } else {
            if (day > 28) valid = 0;
        }
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        if (day > 30) valid = 0;
    }

    if (valid) {
        printf("The date is correct.\n");
    } else {
        printf("The date is incorrect.\n");
    }

    return 0;
}
