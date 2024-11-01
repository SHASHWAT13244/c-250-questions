#include <stdio.h>

int main() {
    char ch;

    // Prompt the user for a character
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Print the ASCII value
    printf("The ASCII value of '%c' is %d\n", ch, (int)ch);

    return 0;
}
