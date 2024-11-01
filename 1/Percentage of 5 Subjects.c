#include <stdio.h>

int main() {
    float marks[5], totalMarksObtained = 0, totalMarks = 500, percentage;
    int i;

    // Prompt the user to enter marks for 5 subjects
    printf("Enter marks for 5 subjects (out of 100):\n");
    for (i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &marks[i]);
        totalMarksObtained += marks[i];
    }

    // Calculate percentage
    percentage = (totalMarksObtained / totalMarks) * 100;

    // Display the result
    printf("Total Marks Obtained: %.2f\n", totalMarksObtained);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}
