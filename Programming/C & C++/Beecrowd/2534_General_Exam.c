//https://judge.beecrowd.com/en/problems/view/2534

#include<stdio.h>

int main()
{
    int i, j, x, y, a, b, temp;

    while (scanf("%d %d", &a, &b) != EOF)
    {
        int a1[a], a2[b];

        for (i = 0; i  <  a; ++i)
            scanf("%d", &a1[i]);

        for (i = 0; i  <  a-1; ++i)
        {
            for (j = i+1; j  <  a; ++j)
            {
                if (a1[j] > a1[i])
                {
                    temp = a1[i];
                    a1[i] = a1[j];
                    a1[j] = temp;
                }
            }
        }

        for (i = 0; i  <  b; ++i)
            scanf("%d", &a2[i]);

        for (i = 0; i  <  b; ++i)
            printf("%d\n", a1[a2[i]-1]);
    }

    return 0;
}

