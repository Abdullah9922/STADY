//https://judge.beecrowd.com/en/problems/view/1028
#include <stdio.h>

int main() {
    int tc;
    scanf("%d", &tc);

    for (int i = 0; i < tc; i++) {
        int a, b, c;
        scanf("%d %d", &a, &b);

        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        c = a;

        printf("%d\n", c);
    }
    return 0;
}
