#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int a=-1,b=1,c;
    for(int i=1;i<=n;i++){
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
}
