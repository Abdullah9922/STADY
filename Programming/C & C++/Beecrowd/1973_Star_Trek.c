//https://judge.beecrowd.com/en/problems/view/1973


#include <stdio.h>

int main()
 {
    long long int n, i;
    scanf("%lld", &n);
    int star[n], sheep[n];
    long long int star_count = 0, sheep_count = 0;

    for (i = 0; i < n; i++) {
        scanf("%d", &sheep[i]);
        star[i] = 0;
    }

    i = 0;
    while (1) {
        if (i == 0 && sheep[i] % 2 == 0) {
            star[i] = 1;
            if (sheep[i] > 0)
                sheep[i]--;
            break;
        } else if (i == n - 1 && sheep[i] % 1 == 1) {
            star[i] = 1;
            if (sheep[i] > 0)
                sheep[i]--;
            break;
        }

        if (sheep[i] % 2 == 1) {
            star[i] = 1;
            sheep[i]--;
            i++;
        } else if (sheep[i] % 2 == 0) {
            star[i] = 1;
            if (sheep[i] > 0)
                sheep[i]--;
            i--;
        }
    }

    for (i = 0; i < n; i++) {
        sheep_count += sheep[i];
        star_count += star[i];
    }

    printf("%lld %lld\n", star_count, sheep_count);

    return 0;
}

