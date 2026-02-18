//https://judge.beecrowd.com/en/problems/view/1901

#include<stdio.h>

int main()
{
    int n;

    while(scanf("%d",&n) != EOF){

        int arr[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++)
                scanf("%d",&arr[i][j]);
        }

        int a1,a2,n1,n2,flag,index=0,count=0;
        n1 = n;
        n1 = n1*2;
        n2 = n*n;

        int arr2[n2];
        for (int i = 0; i < n2; i++)
            arr2[i] = -1;

        while(n1--){
            flag=1;
            scanf("%d %d",&a1,&a2);

            for(int k=0;k<n2;k++){
                if(arr2[k] == arr[a1][a2]){
                    flag = 0;
                    break;
                }
            }

            if(flag == 1){
                arr2[index++] = arr[a1][a2];
                count++;
            }
        }
        printf("%d\n",count);
    }
}
