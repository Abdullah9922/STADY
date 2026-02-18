#include <stdio.h>

int main() {
    int T, N;

    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        scanf("%d", &N);

        int maxArea = 0;
        for (int length = 1; length <= N / 2; length++) {
            int width = (N - 2 * length) / 2;
            int area = length * width;
            if (area > maxArea) {
                maxArea = area;
            }
        }

        printf("%d\n", maxArea);
    }

    return 0;
}
