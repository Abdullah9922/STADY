#include<stdio.h>

int main()
{
    int tc;
    scanf("%d",&tc);

    int n,k;
    while(tc--){
        scanf("%d %d",&n,&k);

        int s[n],t[n];
        for(int i=0;i<n;i++)
            scanf("%d",&s[i]);

        for(int i=0;i<n;i++)
            scanf("%d",&t[i]);

        int temp;
        for(int i=0,j=n;k>0;k--,i++,j--){
            temp=s[i];
            s[i]=s[j];
            s[j]=temp;
        }

        printf("\n");
        for(int i=0;i<n;i++)
            printf("%d ",s[i]);
        printf("\n");

        int count = 0;
        for(int i=0;i<n;i++){
            if(s[i]!=t[i])
                count++;
        }

        if(count>0) printf("NO\n\n\n");
        else printf("YES\n\n\n");

    }
}
