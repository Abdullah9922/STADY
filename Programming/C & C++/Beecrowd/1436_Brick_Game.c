//https://judge.beecrowd.com/en/problems/view/1436

#include<stdio.h>

int main()
{
    int tc;
    scanf("%d",&tc);

    int n;
    for(int i=1;i<= tc;i++){
        scanf("%d",&n);

        int arr[n];
        for(int j=1;j<=n;j++)
            scanf("%d",&arr[j]);

        int j = ((n-1)/2) +1;
        printf("Case %d: %d\n",i,arr[j]);

    }
}
