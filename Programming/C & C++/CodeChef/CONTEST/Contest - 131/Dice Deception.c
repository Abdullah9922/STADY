#include<stdio.h>
int main()
{
    int a,b,n,sum=0;
    scanf("%d",&n);

    for(int i=0;i<n;i++){

        for(int j=0;j<1;j++)
            scanf("%d %d",&a,&b);

        int arr[a];
        for(int j=0;j<a;j++)
            scanf("%d",&arr[j]);

        int arr2[a];
        for(int j=0;j<a;j++)
            arr2[j]=arr[j];

        for(int j=0;j<1;j++){
            for(int j=0;j<a;j++){ // 1 2 3 2 1

                if(arr[j]==1){
                    arr2[j]=6;
                    arr[j]=0;
                }

                else if(arr[j]==2){
                    arr2[j]=5;
                    arr[j]=0;
                }

                else if(arr[j]==3){
                    arr2[j]=4;
                    arr[j]=0;

                }



            }

        }

        for(int j=0;j<a;j++)
            sum=sum+arr2[j];

        printf("%d\n",sum);
        sum=0;
    }
}
