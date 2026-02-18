//https://judge.beecrowd.com/en/problems/view/1318
#include<stdio.h>
int main()
{
    int m,n;

    while(1){
        scanf("%d %d",&m,&n);

        if(m==0 && n==0)
            return 0;

        int arr[n];
        for(int i=0;i<n;i++)
            scanf("%d",&arr[i]);

        int arr2[m]={0};
        int j=0,l=0,count=0,flag=0;

        for(int i=0;i<n;i++){ // 6 1 3 6 6 4 2 3 1 2

            for(int k=0;k<m;k++){
                if(arr2[k] ==arr[i])
                    flag++;
            }

            if(arr[j++] == arr[i] && j!=i && flag ==0){
                count++;
                arr2[l++]=arr[i];
                break;
            }
            flag=0;
        }
        printf("%d\n",count);

    }

}
