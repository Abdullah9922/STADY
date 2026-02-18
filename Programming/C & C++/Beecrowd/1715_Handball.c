//https://judge.beecrowd.com/en/problems/view/1715

#include<stdio.h>

int main()
{
    int n,m;

    while( scanf("%d %d",&n,&m) != EOF){

        int count=0,count2=0,j;
        int arr[n][m];

        for(int i=0;i<n;i++){

            int count=1;
            for(int j=0;j<m;j++){
                scanf("%d",&arr[i][j]);

                if(arr[i][j] == 0) count=0;
            }

            if(count) count2++;
        }
        printf("%d\n",count2);
    }
}
