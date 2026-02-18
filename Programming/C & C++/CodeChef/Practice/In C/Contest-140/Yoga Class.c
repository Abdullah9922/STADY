#include<stdio.h>
int main()
{
    int tc;
    scanf("%d",&tc);

    int n,x,y;
    while(tc--){
        scanf("%d %d %d",&n,&x,&y);

        if(n%2==0){
            int a=n*x;
            int b=(n/2)*y;

            if(a>b) printf("%d\n",a);
            else printf("%d\n",b);
        }

        else{
            int temp=n/2;
            int sum=0;
            sum=temp*y;
            sum+=x;

            int sum2=n*x;

            if(sum>sum2) printf("%d\n",sum);
            else printf("%d\n",sum2);
        }
    }
}
