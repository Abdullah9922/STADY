//https://judge.beecrowd.com/en/problems/view/1089


#include <stdio.h>

int main() {
    int n, i, p;

    while (1) {
        scanf("%d", &n);
        if (n == 0)
            break;

        p = 0;
        int a[n];
        for (i = 0; i < n; i++)
            scanf("%d", &a[i]);

        for (i = 1; i < n - 1; i++) {
            if ((a[i] < a[i - 1] && a[i] < a[i + 1]) ||
                (a[i] > a[i - 1] && a[i] > a[i + 1])) {
                p++;
            }
        }

        if ((a[n - 1] > a[n - 2] && a[n - 1] > a[0]) ||
            (a[n - 1] < a[n - 2] && a[n - 1] < a[0])) {
            p++;
        }

        if ((a[0] > a[1] && a[0] > a[n - 1]) ||
            (a[0] < a[1] && a[0] < a[n - 1])) {
            p++;
        }

        printf("%d\n", p);
    }

    return 0;
}

