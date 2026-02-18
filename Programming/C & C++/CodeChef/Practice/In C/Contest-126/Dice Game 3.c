#include <stdio.h>

int main() {
    int tc, n;
    scanf("%d", &tc);

    while (tc--) {
        scanf("%d", &n);


        int score = 0;

        for (int i = 1; i <= n; i++) {
            if (i % 2 == 1) {
                score += 1;
            } else {
                score += 12;
            }
        }

        printf("%d\n", score);
    }

    return 0;
}
