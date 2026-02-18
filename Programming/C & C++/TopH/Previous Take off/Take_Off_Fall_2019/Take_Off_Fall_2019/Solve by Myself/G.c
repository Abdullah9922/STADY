#include<stdio.h>
#include<string.h>

int main()
{
    int tc;
    scanf("%d",&tc);

    int n;
    for(int i=1;i<=tc;i++){
        scanf("%d",&n);

        char sA[10],sB[10],sS[10],sT[10];

        scanf("%s",sA);
        int xA;
        scanf("%d",&xA);

        scanf("%s",sB);
        int xB;
        scanf("%d",&xB);

        scanf("%s",sS);
        int xS;
        scanf("%d",&xS);

        scanf("%s",sT);
        int xT;
        scanf("%d",&xT);


        if(n%2==0) n=n/2;
        else n=(n/2)+1;

        int count=0;
        if(xA/2>=n && xB/2>=n && xS/2>=n && xT>=n)
            printf("Case %d: Carry On!\n",i);
        else printf("Case %d: Abort! Abort!\n",i);
    }
}
