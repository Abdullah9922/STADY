#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);

    int t=(a+b)*2;

    if(t<1000) printf("NO\n");
    else if(t>=1000) printf("Yes\n");
}
