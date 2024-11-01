#include <stdio.h>
#include <string.h>

int main() {
    char str[100], result[100];
    int j = 0;

    printf("Enter a string: ");
    gets(str);  // Use fgets in production code

    for (int i = 0; str[i] != '\0'; i++) {
        switch (str[i]) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                break;
            default:
                result[j++] = str[i];
        }
    }
    result[j] = '\0';  // Null terminate the result string

    printf("String without vowels: %s\n", result);
    return 0;
}
