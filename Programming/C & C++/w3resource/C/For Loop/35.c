#include<stdio.h>
int main()
{
    int n, prv=0, pre=1, temp;
    scanf("%d",&n);
    printf("%5d %5d", prv, pre);
    for (int i=3;i<=n;i++)
    {
        temp = prv + pre;
        printf("%5d",temp);
        prv=pre;
        pre=temp;


    }

}
