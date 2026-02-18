#include<stdio.h>
#include<string.h>

void toLower(char a[],int n)
{
    for(int i=0;i<n;i++){
        if(a[i]>= 'A' && a[i]<='Z')
            a[i] += 32;
    }
}


int main()
{
    int tc;
    scanf("%d",&tc);

    int n;
    for(int i=1;i<=tc;i++){
        scanf("%d",&n);

        char a1[10000],a2[10000];

        scanf("%s",a1);
        scanf("%s",a2);

        toLower(a1,n);
        toLower(a2,n);

        int count=0;
        for(int i=0;i<n;i++){
            if(a1[i]!=a2[i])
                count++;
        }
        if(count==0) printf("Case %d: vai problem solve hoy na\n",i);
        else printf("Case %d: table e boisha thak solve hobe\n",i);
    }
}
