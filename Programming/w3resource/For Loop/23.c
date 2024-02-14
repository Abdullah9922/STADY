#include<stdio.h>
int main()
{
    int n;
    long int a=1,sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {

        printf("%ld ",a);
        sum=sum+a;
        a=(a*10)+1;
        printf("\n");
    }
    printf("\nSum= %ld",sum);
}
