//https://judge.beecrowd.com/en/problems/view/2108
#include<stdio.h>
#include<string.h>

int main() {
    int index = 0, cont = 0, finalcont = 0, a = 0;
    char s[1000], s2[1000] = {0}; // Initialize s2 to make sure it's empty

    while (fgets(s, 1000, stdin)) {  // Use fgets instead of gets

        if(s[0]=='0' && s[1]=='\n') break; // Check for '0' followed by newline

        int first = 1; // Variable to track if we are at the first word
        for (int i = 0; s[i] != '\0'; i++) {
            if (s[i] == ' ' || s[i] == '\n') { // Include newline in the condition
                if (cont > 0) { // Only print if cont is not zero
                    if (!first) {
                        printf("-");
                    }
                    printf("%d", cont);
                    first = 0;
                    if (cont > a) { // Update the longest word logic
                        a = cont;
                        strncpy(s2, s + index, cont);
                        s2[cont] = '\0'; // Properly null-terminate s2
                    }
                    cont = 0;
                }
                index = i + 1; // Update start index of the next word
            } else {
                cont++;
            }
        }

        if (cont > 0) { // Handle the last word
            if (!first) {
                printf("-");
            }
            printf("%d", cont);
            if (cont > a) {
                a = cont;
                strncpy(s2, s + index, cont);
                s2[cont] = '\0';
            }
            cont = 0;
        }

        printf("\n");
    }

    printf("The biggest word: %s\n", s2);

    return 0;
}
