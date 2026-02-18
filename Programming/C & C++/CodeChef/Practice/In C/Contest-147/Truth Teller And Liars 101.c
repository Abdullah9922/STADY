#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);

    int n,m;
    while(t--){
        scanf("%d %d",&n,&m);

        if(n>m) printf("%d\n",m*2+1);
        else printf("-1\n");
    }
}
