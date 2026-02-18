#include<stdio.h>
int main()
{
    int arr[3][3],arr1[3][3],arr2[3][3],sum=0;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
            scanf("%d",&arr1[i][j]);
    }

    printf("\nFirst matrix is:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
            printf("%d ",arr1[i][j]);
            printf("\n");
    }
    printf("\n\n");



    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
            scanf("%d",&arr2[i][j]);
    }

    printf("\nSecond matrix is:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
            printf("%d ",arr1[i][j]);
            printf("\n");
    }
    printf("\n");

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sum =0;
            for(int k=0;k<3;k++)
                sum+=arr1[i][k]*arr2[k][j];
            arr[i][j]=sum;
        }
    }

    printf("After multiply two matrices final matrix is:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
            printf("%d ",arr[i][j]);
            printf("\n");
    }

    printf("\n");

}
