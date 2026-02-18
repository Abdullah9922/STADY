#include<stdio.h>


void find_max_min(int arr[], int n, int *max, int *min) {
    *max = arr[0];
    *min = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > *max) {
            *max = arr[i];
        } else if (arr[i] < *min) {
            *min = arr[i];
        }
    }
}


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

        int max,min;

        int arr2[n];
        int z=0,count=0,temp=9999999;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){

                while(z !=(n-1)){
                    if(arr[i] != arr[z] && arr[j] != arr[z])
                        arr2[count++] = arr[z];
                    z++;
                }

                find_max_min(arr2,n,&max,&min);


                if(temp > (max - min) ) temp = max - min;
                count=0;
                z=0;
            }
        }

        printf("%d\n",temp);
    }
}
