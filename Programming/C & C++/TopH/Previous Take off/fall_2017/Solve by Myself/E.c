#include<stdio.h>

int main()
{
    int tc;
    scanf("%d",&tc);

    int n,m;
    for(int i=1;i<=tc;i++){
        scanf("%d %d",&n,&m);

        int c,p,x,count=0,flag=0,temp1=0,temp2=99999;
        for(int j=1;j<=n;j++){
            scanf("%d %d",&c,&p);

            if(c==p){
                if(1) count++;
                if(count==n){
                    printf("Case %d: He is in the queue\n",i);
                    flag++;
                }
            }

            else{
                temp1=c-p;
                if(temp1<temp2){
                    temp2=temp1;
                    x=j;
                }
            }
        }
        if(flag==0)
            printf("Case %d: Bus number %d\n",i,x);
    }
}
