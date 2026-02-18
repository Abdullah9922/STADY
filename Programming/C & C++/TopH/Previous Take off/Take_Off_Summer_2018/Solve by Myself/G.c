#include<stdio.h>

int main()
{
    int tc;
    scanf("%d",&tc);

    int n,m;
    for(int i=1;i<=tc;i++){
        scanf("%d %d",&n,&m);

        int a1,b2,a2,b1;
        int sumA=0,sumT=0;
        while(n--){
            scanf("%d %d",&a1,&b1);
            for(int j=a1;j<=b1;j++)
                sumA+=j;
        }

        while(m--){
            scanf("%d %d",&a2,&b2);
            for(int j=a2;j<=b2;j++)
                sumT+=j;
        }
        if(sumA>sumT) printf("Case #%d: Avengers\n",i);
        else if(sumA<sumT) printf("Case #%d: Thanos\n",i);
        else printf("Case #%d: Draw\n",i);
    }
}
