#include<stdio.h>
int main()
{
    int sum=0,i,j,avg;
    for(i=1;i<=10;i++)
        {
        printf("\nnumber%d: ",i);

        scanf("%d",&j);
        sum=sum+j;
    }
    printf("\nSum = %d",sum);
    printf("\nAvg = %d",(sum/10));
}
