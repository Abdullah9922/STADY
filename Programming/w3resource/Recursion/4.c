#include<stdio.h>

int n;

int printa(int a[]);

int main()
{
    scanf("%d",&n);

    int a[n];
    for(int i=1;i<=n;i++)
        scanf("%d",&a[i]);

    printa(a);

}


int printa(int a[])
{
    static int i=1;
    if(i >= n+1)
        return 0;
    printf("%d   ",a[i]);
    i++;
    printa(a);
}
