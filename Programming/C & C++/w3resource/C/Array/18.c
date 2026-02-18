#include<stdio.h>
int main()
{
    int a[3][3];

    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++)
            scanf("%d",&a[i][j]);
    }


    for(int i=1;i<=3;i++){
        printf("\n\n");
        for(int j=1;j<=3;j++)
            printf("%d  ",a[i][j]);
    }


}
