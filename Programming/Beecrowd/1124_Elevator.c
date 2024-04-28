//https://judge.beecrowd.com/en/problems/view/1124
#include <stdio.h>

int main()
{
    int L, C, R1, R2;

    while (1) {
        scanf("%d %d %d %d", &L, &C, &R1, &R2);

        if (L == 0 && C == 0 && R1 == 0 && R2 == 0) break;


        int min_diameter = R1 + R2;
        int min_length = (R1 > R2 ? R1 : R2) * 2;

        if (min_diameter <= L && min_length <= C)
            printf("S\n");
        else
            printf("N\n");
    }

    return 0;
}

