#include <stdio.h>

int main() {
    int tc; // Number of test cases
    scanf("%d", &tc);

    while (tc--) {
        int d, x, y;
        scanf("%d %d %d", &d, &x, &y);

        if (y >= x) {
            printf("0\n");
            continue;
        }

        int s = -1;
        for (int i = 0; i <= 100; i++) {
            int b = y - i;
            if (b < 0) break;


            double dis = (100.0 - (i * d)) / 100.0;
            double dis_price = x * dis;

            if (b >= dis_price) {
                s = i;
                break;
            }
        }

        printf("%d\n", s);
    }

    return 0;
}
