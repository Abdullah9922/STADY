//https://judge.beecrowd.com/en/problems/view/2520

#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b;
    while (scanf("%d %d", &a, &b) != EOF) {
        int x1 = 0, x2 = 0, y1 = 0, y2 = 0;
        for (int i = 0; i < a; i++) {
            for (int j = 0; j < b; j++) {
                int davez;
                scanf("%d", &davez);
                if (davez == 1) {
                    x1 = i;
                    y1 = j;
                } else if (davez == 2) {
                    x2 = i;
                    y2 = j;
                }
            }
        }
        printf("%d\n", abs(y1 - y2) + abs(x1 - x2));
    }
    return 0;
}
