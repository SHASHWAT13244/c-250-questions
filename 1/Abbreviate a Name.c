#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    char abbreviated[100] = "";
    char *token;

    // Prompt the user for a full name
    printf("Enter the full name: ");
    fgets(name, sizeof(name), stdin);

    // Remove the newline character from fgets
    name[strcspn(name, "\n")] = 0;

    // Split the name into tokens based on spaces
    token = strtok(name, " ");
    while (token != NULL) {
        // Get the first character of the token (initial)
        if (strlen(abbreviated) == 0) {
            // For the first token (first name), add it fully
            strcat(abbreviated, token);
        } else {
            // For subsequent tokens (middle names), add the initial
            strncat(abbreviated, " ", 1);
            strncat(abbreviated, (char[]){token[0], '\0'}, 1);
        }
        token = strtok(NULL, " ");
    }

    // Add the last name (last token) fully
    // Get the last token
    char *lastName = strrchr(name, ' ') + 1;
    strcat(abbreviated, " ");
    strcat(abbreviated, lastName);

    // Display the abbreviated name
    printf("Abbreviated Name: %s\n", abbreviated);

    return 0;
}
