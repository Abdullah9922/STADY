//https://judge.beecrowd.com/en/problems/view/2061


#include<stdio.h>
int main()
{

    int i , j , k;
    int n, m;
    int tab;
    char str[10];

    scanf("%d %d",&n ,&m);
    tab=n;
    for ( i = 0; i < m; i++)
    {
        scanf("%s",str);
        if (str[0]=='f')
        {
            tab=tab-1+2;
        }
        if (str[0]=='c')
        {
            tab=tab-1;
        }

    }

    printf("%d\n",tab);


     return 0;
}
