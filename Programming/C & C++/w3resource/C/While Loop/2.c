#include<stdio.h>
int main()
{
    int a, sum=0;
    printf("Input integers (enter 0 to stop):\n");
    while(1)
    {
        scanf("%d",&a);
        if(a==0)
        {
           break;
        }

        if(a>0)
            sum=sum + a;
    }
    printf("Sum of positive integers: %d\n",sum);

}
