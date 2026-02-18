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

        int temp;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(arr[i]<arr[j]){
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }

        int j=1,sum=arr[0];
        for(int i=1;i<n;i++){
            int temp = arr[i] - j++;

            if(temp>=0)
                sum+=temp;
            else break;
        }

        printf("%d\n",sum);

    }
}
