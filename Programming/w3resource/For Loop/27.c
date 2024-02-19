#include<stdio.h>
int main()
{
    int n,sum;
    scanf("%d",&n);
    printf("The positive divisor : ");
    sum=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
            printf("%d ",i);
            sum=sum+i;
    }
    printf("\nThe sum of the divisor is : %d\n",sum);
    if(sum>n)
        printf("The number is not perfect.");
    else
        printf("The number is perfect.");
}
