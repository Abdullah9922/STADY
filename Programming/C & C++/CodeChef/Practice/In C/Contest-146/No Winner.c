#include<stdio.h>

int main()
{
    int tc;
    scanf("%d",&tc);

    int a,b,c,m;
    while(tc--){
        scanf("%d%d%d%d",&a,&b,&c,&m);

        if(a==b || b==c || c==a){
            printf("YES\n");
            continue;
        }

        int L,M,B;
        if(a<b && a<c) L=a;
        else if(b<a && b<c) L=b;
        else L=c;

        if(a>L && a<b || a>L && a<c) M=a;
        else if(b>L && b<a || b>L && b<c) M=b;
        else M=c;

        if(a>b && a>c) B=a;
        else if(b>a && b>c) B=b;
        else B=c;

        //printf("Low = %d  Middle = %d  Big = %d \n",L,M,B);

        int m2=m;

        int flag=0;
        while(m--){
            L=L+1;
            if(L==M) flag++;
        }

        if(flag==0){
            printf("NO\n");
            continue;
        }
        else{
            printf("YES\n");
            continue;
        }

        int flag2=0;
        while(m2--){
            M=M+1;
            if(B==M) flag2++;
        }

        if(flag2==0) printf("NO\n");
        else printf("YES\n");

    }
}
