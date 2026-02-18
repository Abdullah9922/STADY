//https://judge.beecrowd.com/en/problems/view/1553

#include<stdio.h>

int main()
{
    int n,k;

    while(1){
        scanf("%d %d",&n,&k);

        if(n==0 && k==0) return 0;

        int arr[n];
        for(int i=0;i<n;i++)
            scanf("%d",&arr[i]);

        int count, count2 =0;
        for(int i=0;i<n;i++){
            count = 1;
            for(int j=0;j<n;j++){
                if(i != j && arr[i] != 0 && arr[j] != 0 && arr[i] == arr[j] ){
                    count++;

                }
            }
            if(count >= k)
                count2++;

            if(arr[i] != 0){
                for(int j=0;j<n;j++){
                    if(arr[j] == arr[i] && i!=j)
                        arr[j] = 0;
                }
                arr[i] = 0;
            }
        }

        printf("%d\n",count2);
    }
}
