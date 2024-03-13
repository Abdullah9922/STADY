#include<stdio.h>

int fact(int );

int main()
{
    int n,ans;
    scanf("%d",&n);

    ans=fact(n);

    printf("%d",ans);
}


int fact(int n)
{
    if(n!=1){
        n=n*fact(n-1);
    }
    return n;
}
