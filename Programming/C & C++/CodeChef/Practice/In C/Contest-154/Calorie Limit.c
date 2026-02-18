#include<stdio.h>

int main()
{
    int tc;
    scanf("%d",&tc);

    int n,k;
    while(tc--){
        scanf("%d %d",&n,&k);

        int arr[n];
        for(int i=0;i<n;i++)
            scanf("%d",&arr[i]);

        int sum = 0, count = 0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(sum<=k)count++;
            else break;
        }

        printf("%d\n",count);

    }
}
