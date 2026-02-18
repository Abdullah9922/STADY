#include<stdio.h>

int main()
{
    int tc;
    scanf("%d",&tc);

    int n;
    while(tc--){
        scanf("%d",&n);

        int a[n];
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);

        int count=0;
        for(int i=0;i<n;i++){
            if(a[i]>4)
                count++;
        }
        if(count==n) printf("YES\n");
        else printf("NO\n");
    }
}
