//https://judge.beecrowd.com/en/problems/view/1414
#include <stdio.h>
#include <string.h>

int main() {
    int t, n, p;
    while (scanf("%d %d", &t, &n) == 2 && t != 0) {
        char time[10];
        getchar(); // To consume the newline character
        int sum = 0;
        for (int i = 0; i < t; ++i) {
            scanf("%s %d", time, &p);
            sum += p;
        }
        printf("%d\n", n * 3 - sum);
    }
    return 0;
}
