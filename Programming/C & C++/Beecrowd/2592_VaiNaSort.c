//https://judge.beecrowd.com/en/problems/view/2592

#include<stdio.h>

int main()
{
    int n;

    while(1){
        scanf("%d",&n);

        if(n==0) return 0;

        int arr[n];
        int count=0;
        while(1){

            for(int i=0;i<n;i++)
                scanf("%d",&arr[i]);
            count++;

            int sort=1;
            for(int i=1;i<n;i++){

                if(arr[i] <= arr[i-1]){
                    sort=0;
                    break;
                }
            }

            if(sort) break;
        }
        printf("%d\n",count);

    }
}
