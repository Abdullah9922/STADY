#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Input number of terms: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d ",2*i);
        sum+=(i*2);
    }
    printf("\nThe Sum of even Natural Number upto %d terms : %d",n,sum);
}
