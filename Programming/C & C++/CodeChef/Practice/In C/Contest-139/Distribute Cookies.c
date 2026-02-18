#include<stdio.h>
int main()
{
    int tc;
    scanf("%d",&tc);

    int n,m;
    while(tc--){
        scanf("%d %d",&n,&m);  // 4 21

        int temp=m/n;
        int a=temp*n;
        int b=(temp+1)*n;
        int x=m-a;
        int y=b-m;

        if(m%n==0) printf("0\n");

        else if(n>m) printf("%d\n",n-m);

        else if(1){
            if(x<y) printf("%d\n",x);
            else printf("%d\n",y);
        }


    }
}
