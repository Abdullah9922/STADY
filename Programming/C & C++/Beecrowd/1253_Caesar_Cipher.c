//https://judge.beecrowd.com/en/problems/view/1253

#include <stdio.h>
#include <string.h>

int main()
{
    int tc, n;
    scanf("%d", &tc);
    getchar(); // Consume the leftover newline character from scanf

    char s[51];
    while (tc--) {
        fgets(s, sizeof(s), stdin); // Use fgets to read the string safely
        s[strcspn(s, "\n")] = '\0'; // Remove the newline character added by fgets

        scanf("%d", &n);
        getchar(); // Consume the leftover newline character from scanf

        int l = strlen(s);
        char s2[51]; // Allocate a buffer for the shifted string

        for (int i = 0; i < l; i++) {
            if (s[i] >= 'A' && s[i] <= 'Z') { // Ensure the character is uppercase
                s2[i] = (char)(((s[i] - 'A' - n + 26) % 26) + 'A'); // Proper wrapping logic
            } else {
                s2[i] = s[i]; // Handle non-uppercase characters (if any)
            }
        }
        s2[l] = '\0'; // Null-terminate the string

        puts(s2);
    }

    return 0;
}
