//https://judge.beecrowd.com/en/problems/view/2167

#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i=1;i<=n;i++)
        scanf("%d",&arr[i]);

    int temp=0;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i+1]){
            temp = i+1;
            break;
        }
    }

        printf("%d\n",temp);
}
