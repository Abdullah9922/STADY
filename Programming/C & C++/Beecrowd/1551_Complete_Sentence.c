//https://judge.beecrowd.com/en/problems/view/1551

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int tc;
    scanf("%d", &tc);
    getchar(); // Consume newline left by scanf

    char s[99999];

    while (tc--)
    {
        fgets(s, sizeof(s), stdin);

        // Array to track alphabet presence
        int alphabet[26] = {0};
        int unique_count = 0;

        for (int i = 0; s[i] != '\0'; i++)
        {
            if (isalpha(s[i])) // Check if character is alphabetic
            {
                char lower = tolower(s[i]); // Convert to lowercase
                int idx = lower - 'a';     // Calculate index (0 to 25)

                if (alphabet[idx] == 0) // If this letter hasn't been seen yet
                {
                    alphabet[idx] = 1;
                    unique_count++;
                }
            }
        }

        // Determine the type of phrase
        if (unique_count == 26)
            printf("frase completa\n");
        else if (unique_count >= 13)
            printf("frase quase completa\n");
        else
            printf("frase mal elaborada\n");
    }

    return 0;
}
