#include<stdio.h>
int main()
{
    long int n,t=9,sum=0;
    printf("Input the number or terms :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum=sum+t;
        printf("%ld  ",t);
        t=t*10+9;
    }
    printf("\n\nSum= %ld",sum);
    printf("\n\n\n");
}
