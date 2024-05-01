//https://judge.beecrowd.com/en/problems/view/1987
#include<stdio.h>
int main()
{
    int n , m, i;
    int x=0;
    while (scanf("%d %d",&n,&m)!=EOF)
    {
        for ( i = 0; i < n; i++)
        {
            x=x+m%10;
            m=m/10;
        }
        if (x%3==0)
        {
            printf("%d sim\n",x);
        }
        else
            printf("%d nao\n",x);

        x=0;
    }

     return 0;
}
