//https://judge.beecrowd.com/en/problems/view/1827

#include<stdio.h>

int main()
{
    int n;

    while( scanf("%d",&n) != EOF){

        int arr[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++)
                scanf("%d",&arr[i][j]);
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++)
                printf("%d",arr[i][j]);
            printf("\n");
        }

        printf("\n\n");
    }
}
