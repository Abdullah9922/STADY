//https://judge.beecrowd.com/en/problems/view/2787
#include<stdio.h>
int main()
{
    int a,b,W,B;
    scanf("%d %d",&a,&b);
    if(a>0&&b>0){

        if (a%2==0 && b%2==0)
            printf("1\n");

        else if(a==b)
            printf("1\n");

        else if (a%2!=0 && b%2!=0)
            printf("1\n");

        else
            printf("0\n");

    }
}
