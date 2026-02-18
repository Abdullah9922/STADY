//https://judge.beecrowd.com/en/problems/view/2590
#include <stdio.h>

int main() {
    unsigned long long n, m;
    char l_digit[] = {1, 7, 9, 3};

    scanf("%llu", &m);

    while (m--) {
        scanf("%llu", &n);
        printf("%d\n", l_digit[n % 4]);
    }

    return 0;
}
