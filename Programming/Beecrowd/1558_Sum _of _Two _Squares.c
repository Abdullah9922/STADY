//https://judge.beecrowd.com/en/problems/view/1558
#include <stdio.h>

int main() {
    int num;
    while (scanf("%d", &num) != EOF) {
        int canBeSumOfSquares = 0;
        if (num >= 0) { // Negative numbers cannot be represented as a sum of squares
            for (int i = 0; i * i <= num; i++) {
                int remainder = num - i * i;
                int j = 0;
                while (j * j <= remainder) {
                    if (j * j == remainder) {
                        canBeSumOfSquares = 1; // If remainder is a perfect square, set flag to true
                        break;
                    }
                    j++;
                }
                if (canBeSumOfSquares) break;
            }
        }
        if (canBeSumOfSquares) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}
