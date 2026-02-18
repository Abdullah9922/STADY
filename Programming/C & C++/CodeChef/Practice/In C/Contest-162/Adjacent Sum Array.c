#include<stdio. h>

int main()
{
    int tc;
    scanf("%d",&tc);

    int n;
    while(tc--){
        scanf("%d",&n);

        int arr[n];
        for(int i=0;i<n-1;i++)
            scanf("%d",&arr[i]);

        int arr2[n];
        int index=0;
        for(int i=0;i<n-1;i++){
            arr2[index++] = arr[i];
        }


    }
}
