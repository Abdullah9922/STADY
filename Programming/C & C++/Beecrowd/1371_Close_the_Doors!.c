//https://judge.beecrowd.com/en/problems/view/1371

#include <stdio.h>
#include <math.h>

int main() {
    int N;

    while (1) {
        scanf("%d", &N);
        if (N == 0) {
            break;
        }

        int k = (int)sqrt(N);


        for (int i = 1; i <= k; i++) {
            if (i > 1) {
                printf(" ");
            }
            printf("%d", i * i);
        }
        printf("\n");
    }

    return 0;
}
