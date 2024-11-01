#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminant, root1, root2;

    printf("Enter coefficients a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    switch ((discriminant > 0) - (discriminant < 0)) {
        case 1: // discriminant > 0
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);
            printf("Roots are real and different: %.2f, %.2f\n", root1, root2);
            break;
        case 0: // discriminant == 0
            root1 = root2 = -b / (2 * a);
            printf("Roots are real and same: %.2f\n", root1);
            break;
        case -1: // discriminant < 0
            printf("Roots are complex and different.\n");
    }

    return 0;
}
