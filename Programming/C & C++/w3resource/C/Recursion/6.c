#include<stdio.h>

int sum(int);

int main()
{
    int n,s;
    scanf("%d",&n);

    s=sum(n);

    printf("SUM of those digit is %d",s);

}


int sum(int n)
{
    static int x=0;
    x+=n%10;
    n=n/10;
    if(n==0)
        return x;
    sum(n);
}
