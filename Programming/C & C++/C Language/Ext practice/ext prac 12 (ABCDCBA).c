#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for (int i=1; i<=n; i++)
    {
        for(int j=i; j<=n-1; j++)
            printf("  ");

        for(int k=1+64; k<=i+64; k++)
            printf("%c ", (char) k);

        for(int l=i-1+64;l>=1+64;l--)
            printf("%c ", (char) l);

    printf("\n");
    }

}

