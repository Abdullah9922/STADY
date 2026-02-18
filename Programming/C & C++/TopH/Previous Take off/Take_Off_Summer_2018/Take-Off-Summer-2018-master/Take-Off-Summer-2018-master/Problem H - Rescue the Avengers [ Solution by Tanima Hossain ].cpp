#include<stdio.h>
int main()
{
    int t,i,j,k;
    long long int a,x;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%lld",&a);
        k=0;
        x=1;
        for (j=0;x<a;j++){
            x=x*2;
            k++;
        }
        printf("Case %d: %d\n",i+1,k);
    }

    return 0;
}