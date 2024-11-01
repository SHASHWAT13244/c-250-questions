#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    float radius, height, circumference, volume;

    printf("Cylinder Calculations:\n");
    printf("1. Circumference\n");
    printf("2. Volume\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    printf("Enter radius: ");
    scanf("%f", &radius);

    switch (choice) {
        case 1:
            circumference = 2 * M_PI * radius;
            printf("Circumference: %.2f\n", circumference);
            break;
        case 2:
            printf("Enter height: ");
            scanf("%f", &height);
            volume = M_PI * radius * radius * height;
            printf("Volume: %.2f\n", volume);
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
