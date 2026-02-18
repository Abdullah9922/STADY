#include<stdio.h>
#include<math.h>

int main()
{
    int tc;
    scanf("%d",&tc);

    int x,n;
    while(tc--){
        scanf("%d %d",&n,&x);

        int sum=0;
        for(int i=n,j=x;i>=1;i--,j--){
            if(j>0)
                sum+=pow(2,i);
            else
                sum-=pow(2,i);
        }
        printf("%d\n",sum);
    }
}
