#include<stdio.h>
int main()
{
    int a[3][3],b[3][3];

    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++)
            scanf("%d",&a[i][j]);
    }

    printf("Your 'A' matrix is: \n");
    for(int i=1;i<=3;i++){
        printf("\n");
        for(int j=1;j<=3;j++)
            printf("%d  ",a[i][j]);
    }

    printf("\n");


    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++)
            scanf("%d",&b[i][j]);
    }

    printf("Your 'B' matrix is: \n");
    for(int i=1;i<=3;i++){
        printf("\n");
        for(int j=1;j<=3;j++)
            printf("%d  ",b[i][j]);
    }


    printf("\nYour new matrix is: \n");
    for(int i=1;i<=3;i++){
        printf("\n");
        for(int j=1;j<=3;j++)
            printf("%d  ",(a[i][j]*b[i][j]));
    }

    printf("\n\n");

}
