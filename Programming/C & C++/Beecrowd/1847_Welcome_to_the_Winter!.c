//https://judge.beecrowd.com/en/problems/view/1847

#include<stdio.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    if((b<a && c>b) || (b<a && c==b))
        printf(":)\n");

    else if((a<b && b>c) || (a<b && b==c))
        printf(":(\n");

    else if(a<b && b<c && (b-a)>(c-b))
        printf(":(\n");

    else if(a<b && b<c && (b-a)<=(c-b))
        printf(":)\n");

    else if(a>b && b>c && (b-c)<(a-b))
        printf(":)\n");

    else if(a>b && b>c && (b-c)>=(a-b))
        printf(":(\n");

    else if(a == b && b<c)
        printf(":)\n");

    else
        printf(":(\n");
}
