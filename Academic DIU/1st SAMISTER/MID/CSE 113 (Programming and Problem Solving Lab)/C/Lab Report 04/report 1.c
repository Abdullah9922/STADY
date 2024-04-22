#include<stdio.h>
int main()
{
    int A=5, B=7, C=4, D=8, E=9;
    //printf("%d\n",A += A * B / C % D++ + A | B);
    //printf("%d\n",B *= (A / B) >= C + D + E++ - E);
    //printf("%d\n",A += A && B & C || D | E + 7);
    printf("%d\n",A *= A++ + ++A * B / C % D);
}
