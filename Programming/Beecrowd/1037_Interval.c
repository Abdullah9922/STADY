//https://judge.beecrowd.com/en/problems/view/1037
#include<stdio.h>
int main()
{
    float n;
    scanf("%f",&n);
    if (0>n || 100<n)
        printf("Fora de intervalo\n");
    if (n>25 && n<=50)
        printf("Intervalo (25,50]\n");
    if (n>=0 && n<=25)
        printf("Intervalo [0,25]\n");
    if (n>75 && n<=100)
        printf("Intervalo (75,100]\n");
}

