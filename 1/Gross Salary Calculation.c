#include <stdio.h>

int main() {
    float basicSalary, allowances, deductions, grossSalary;

    // Prompt the user for input
    printf("Enter the basic salary: ");
    scanf("%f", &basicSalary);

    printf("Enter the allowances: ");
    scanf("%f", &allowances);

    printf("Enter the deductions: ");
    scanf("%f", &deductions);

    // Calculate gross salary
    grossSalary = basicSalary + allowances - deductions;

    // Display the result
    printf("Gross Salary: %.2f\n", grossSalary);

    return 0;
}
