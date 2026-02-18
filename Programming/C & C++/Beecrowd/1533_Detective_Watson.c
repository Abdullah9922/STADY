//https://judge.beecrowd.com/en/problems/view/1533

#include<stdio.h>

int main()
{
    int n;

    while(1){
        scanf("%d",&n);

        if(!n) return 0;

        int arr[n];
        for(int i=1;i<=n;i++)
            scanf("%d",&arr[i]);

        int temp=arr[1], temp2=arr[1], a=1,a2=1;

        for(int i=1;i<=n;i++){
            if(arr[i]>temp){
                temp = arr[i];
                a = i;
            }
        }

        for(int i=1;i<=n;i++){
            if(arr[i]>temp2 && i != a){
                temp2 = arr[i];
                a2 = i;
            }
        }

        printf("%d\n",a2);

    }
}
