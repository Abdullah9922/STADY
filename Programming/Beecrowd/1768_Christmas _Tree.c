//https://judge.beecrowd.com/en/problems/view/1768
#include<stdio.h>
int main()
{
    int n,s,row;

    while(scanf("%d",&n)!=EOF){

        row=(n+1)/2;

        for(int i=1;i<=row;i++){

            for(int j=i+1;j<=row;j++)
                printf(" ");

            for(int j=1;j<=i*2-1;j++)
                printf("*");

            printf("\n");
        }
        s=((n-1)/2);
        for(int i=2;i<=s+1;i++)
            printf(" ");
        printf("*");
        printf("\n");

        for(int i=2;i<=s;i++)
            printf(" ");
        printf("***\n\n");
    }


}
