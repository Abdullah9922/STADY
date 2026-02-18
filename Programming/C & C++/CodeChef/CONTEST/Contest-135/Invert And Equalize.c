#include<stdio.h>
int main()
{
    int tc;
    scanf("%d",&tc);

    int n,cont;
    while(tc--){
        scanf("%d",&n);

        char a[n];
        for(int i=0;i<n;i++)
            scanf("%c",&a[i]);

        if(n==1){
            printf("0\n");
            continue;
        }

        int one=0,zero=0;
        for(int i=0;i<n-1;i++){
            if(a[i]=='1' && a[i+1]=='0')
                zero++;
        }
        for(int i=0;i<n-1;i++){
            if(a[i]=='0' && a[i+1]=='1')
                one++;
        }

        if(zero>one) printf("%d\n",zero);
        else printf("%d\n",one);
    }
}
