#include<stdio.h>

int main()
{
    int tc;
    scanf("%d",&tc);

    int n,m;
    for(int i=1;i<=tc;i++){
        scanf("%d %d",&n,&m);

        float M=(double)m/100;
        float sum=(double)n;
        float dis=n*M;

        //printf("m=%.2f dis=%.2f\n",M,dis);

        while(dis>1){
            sum+=dis;
            dis=dis*M;
        }
        printf("Case %d: %.2f\n",i,sum+dis);
    }
}
