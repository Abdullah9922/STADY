//https://judge.beecrowd.com/en/problems/view/1366
#include <stdio.h>

int main() {
    int n, x, c, v;

    while (scanf("%d", &n) && n) {
        x = 0;
        for (int i = 0; i < n; ++i) {
            scanf("%d %d", &c, &v);
            x += v / 2;
        }

        printf("%d\n", x / 2);
    }
    return 0;
}

