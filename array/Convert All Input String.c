#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    gets(str);  // Use fgets in production code

    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = '*';
    }

    printf("Converted string: %s\n", str);
    return 0;
}
