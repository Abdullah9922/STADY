#include <stdio.h>

int polynomial(int x, int n) {
    if (n == 0)
        return 1;
    else
        return x * polynomial(x, n - 1);
}


void printPolynomialSeries(int x, int n) {
    if (n == 0) {
        printf("1");
        return;
    }

    printPolynomialSeries(x, n - 1);

    printf(" + %d", polynomial(x, n));
}

int main() {
    int n;

    printf("Enter the value of x: ");
    scanf("%d", &n);

    printf("Polynomial series: ");
    printPolynomialSeries(n, n - 1);

    return 0;
}
