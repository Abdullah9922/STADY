#include<stdio.h>

int main()
{
    int tc;
    scanf("%d",&tc);

    int k,n,m,count;
    char str[m];

    for(int i=1;i<=tc;i++){
        scanf("%d %d %d",&k,&n,&m);

        count=0;
        for(int k=0;k<=n;k++){
            gets(str);
            for(int j=0;j<m;j++){
                if(str[j]=='A')
                    count++;
            }
        }
        printf("Case %d: %d\n",i,count);
        while(count--)
            printf("Shohomot Vai\n");
        printf("\n");
    }
}
