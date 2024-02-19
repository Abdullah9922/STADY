#include <stdio.h>

int main() {
    int n;

    scanf("%d",&n);


    for (int i = 0; i < n; ++i) {

        for (int j = 0; j < n - i - 1; ++j) {
            printf("  ");
        }

        int a = 1;

        for (int k = 0; k <= i; ++k) {
            printf(" %d  ",a);
            a = a * (i - k) / (k + 1);
        }
        printf("\n");
    }

    return 0;
}
