#include<stdio.h>

int main()
{
    int tc;
    scanf("%d",&tc);

    int n,k;
    for(int j=1;j<=tc;j++){
        scanf("%d %d",&n,&k);

        int arr[n];
        for(int i=0;i<n;i++)
            scanf("%d",&arr[i]);

        int sum=0;
        for(int i=0;i<n;i++){
           sum+=arr[i]%k;
        }
        printf("Case %d: %d\n",j,sum);
    }
}
