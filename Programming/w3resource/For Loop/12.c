#include<stdio.h>
int main()
{
    int n,k=1,s;
    scanf("%d",&n);
    s=n+4-1;
    for(int i=1;i<=n;i++)
    {
        for(int k=s;k>=1;k--)
            printf(" ");

        for(int j=i;j<=n;j++)
            printf("%d ",k++);
        printf("\n");
        s--;
    }
}



