#include<stdio.h>
int main()
{
    int n,s;
    scanf("%d",&n);
    s=n+4-1;
    for(int i=1;i<=n;i++)
    {
        for(int k=s;k>=1;k--)
            printf(" ");
        for(int j=1;j<=i;j++)
            printf("%d ",i);
        printf("\n");
        s--;
    }
}
