//https://judge.beecrowd.com/en/problems/view/1257

#include <stdio.h>
#include <string.h>

int main()
{
    int tc;
    scanf("%d", &tc);
    getchar();

    while (tc--) {
        int n;
        scanf("%d", &n);
        getchar();

        int sum = 0;

        for (int j = 0; j < n; j++) {
            char s[51];
            fgets(s, sizeof(s), stdin);

            size_t len = strlen(s);
            if (s[len - 1] == '\n') {
                s[len - 1] = '\0';
                len--;
            }

            int sum2 = 0;
            for (int i = 0; i < len; i++) {
                sum2 += (s[i] - 'A') + j + i;
            }

            sum += sum2;
        }
        printf("%d\n", sum);
    }
    return 0;
}

