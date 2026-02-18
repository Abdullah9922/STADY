#include<stdio.h>

int main()
{
    int tc;
    scanf("%d",&tc);

    int n,max, min,s=1;
    while(tc--){
        scanf("%d",&n);

        int arr[n];
        for(int i=0;i<n;i++)
            scanf("%d",&arr[i]);


        for(int i=1 ; i<n ;i++){
            if(arr[i]<arr[i-1]){
                s = 0;
                break;
            }
        }

        if(s){
            printf("0\n");
            continue;
        }

        max = arr[0];
        min = arr[0];

        for(int i=1;i<n;i++){
            if(arr[i] > max)
                max = arr[i];
            else if(arr[i] < min && arr[i] != max)
                min = arr[i];
        }
        printf("%d\n",max+min);

    }
}
