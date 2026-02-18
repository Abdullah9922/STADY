#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);


    int i,j;
    for(int j=1;j<=n;j++){
        int a[10];
        for(i=1;i<=10;i++)
            scanf("%d",&a[i]);

        int up=0,down=0;
        for(i=1;i<=10;i++){
            if(i%2==0) up+=a[i];
            else down+=a[i];
        }
        if(up-down==0) printf("Case %d: Yes\n",j);
        else printf("Case %d: No\n",j);
    }
}
