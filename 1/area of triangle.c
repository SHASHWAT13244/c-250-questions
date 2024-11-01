#include <stdio.h>

int main() {
    float base, height, area;

    // Prompt the user for base and height
    printf("Enter the base of the triangle: ");
    scanf("%f", &base);

    printf("Enter the height of the triangle: ");
    scanf("%f", &height);

    // Calculate the area
    area = 0.5 * base * height;

    // Display the result
    printf("The area of the triangle is: %.2f\n", area);

    return 0;
}
