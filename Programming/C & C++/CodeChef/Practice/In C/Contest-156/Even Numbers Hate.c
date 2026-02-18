#include<stdio.h>

int main()
{
    int tc;
    scanf("%d",&tc);

    int n;
    while(tc--){
        scanf("%d",&n);

        int arr[n];
        for(int i=0;i<n;i++)
            scanf("%d",&arr[i]);

        int p[n];
        int sum = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                sum += arr[j];
            }
            p[i] = sum;
            sum = 0;
        }



    }
}
