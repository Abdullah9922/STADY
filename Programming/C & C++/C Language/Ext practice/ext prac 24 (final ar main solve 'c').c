#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            scanf("%d",&arr[i][j]);
    }

    int temp=arr[0][0];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]>temp)
                temp=arr[i][j];
        }
    }
    printf("%d\n",temp);

}
