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

        int a = arr[n-1];
        int pos = n;

        for(int i=n-2 ; i >= 0 ; i--){
            if(arr[i] <= a/2)
                pos--;
            else
                break;
        }

        printf("%d\n",pos);

    }
}
