//https://judge.beecrowd.com/en/problems/view/2253
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isValidPassword(char *password) {
    int hasUpperCase = 0;
    int hasLowerCase = 0;
    int hasDigit = 0;
    int length = strlen(password);

    // Check length
    if (length < 6 || length > 32)
        return 0;

    // Check for uppercase, lowercase, and digits
    for (int i = 0; i < length; i++) {
        if (isupper(password[i]))
            hasUpperCase = 1;
        else if (islower(password[i]))
            hasLowerCase = 1;
        else if (isdigit(password[i]))
            hasDigit = 1;
        else
            return 0; // Contains punctuation character, accent or space
    }

    return (hasUpperCase && hasLowerCase && hasDigit);
}

int main() {
    char password[100];

    while (fgets(password, sizeof(password), stdin) != NULL) {
        // Remove newline character if present
        if (password[strlen(password) - 1] == '\n')
            password[strlen(password) - 1] = '\0';

        if (isValidPassword(password))
            printf("Senha valida.\n");
        else
            printf("Senha invalida.\n");
    }

    return 0;
}

