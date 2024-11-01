#include <stdio.h>

int main() {
    int choice;
    float temperature, convertedTemp;

    printf("Temperature Conversion:\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter temperature in Celsius: ");
            scanf("%f", &temperature);
            convertedTemp = (temperature * 9 / 5) + 32;
            printf("Temperature in Fahrenheit: %.2f\n", convertedTemp);
            break;
        case 2:
            printf("Enter temperature in Fahrenheit: ");
            scanf("%f", &temperature);
            convertedTemp = (temperature - 32) * 5 / 9;
            printf("Temperature in Celsius: %.2f\n", convertedTemp);
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
