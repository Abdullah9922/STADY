//https://judge.beecrowd.com/en/problems/view/1129

#include<stdio.h>

int main()
{
    int n;

    while(1){
        scanf("%d",&n);

        if(n == 0) return 0;

        int arr[5];
        while(n--){
            for(int i=0;i<n;i++){
                scanf("%d",&arr[i]);
            }

            int temp = arr[0];
            int t;
            for(int i=0;i<n;i++){
                if(arr[i]<temp){
                    temp = arr[i];
                    t = i;
                }
            }

            if(i == 0 )
        }
    }
}
