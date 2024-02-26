//https://judge.beecrowd.com/en/problems/view/2456
#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    if(a>0 && b>0 && c>0 && d>0 && e>0){

        if(a<b && b<c && c<d && d<e)
            printf("C\n");

        else if(a>b && b>c && c>d && d>e)
            printf("D\n");

        else
            printf("N\n");
    }
}
