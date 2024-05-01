//https://judge.beecrowd.com/en/problems/view/1849
#include <stdio.h>

int main()
{
    int a, b, c, d;

    while (scanf("%d %d %d %d", &a, &b, &c, &d) != EOF)
    {
        int e = (a < b) ? a : b;
        int f = (c < d) ? c : d;

        e += f;

        int max_ab = (a > b) ? a : b;
        int max_cd = (c > d) ? c : d;

        int g = (max_ab < max_cd) ? max_ab : max_cd;

        int h = (e < g) ? e : g;

        printf("%d\n", h * h);
    }
    return 0;
}
