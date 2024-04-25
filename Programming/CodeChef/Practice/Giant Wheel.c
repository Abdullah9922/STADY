#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(60<=n  && n<=100)
        printf("Yes\n");
    else if(1<=n && n<=59)
        printf("No\n");
}

