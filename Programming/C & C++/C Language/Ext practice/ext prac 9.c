#include<stdio.h>
int main()
{
    int a,i=1, sum=0;
    float avg;
    printf("Enter 10 number: ");
    for(i=1;i<=10;i++)
    {
       scanf("%d", &a);
    }

    for(i=1;i<=10;i++)
    {
         sum=sum+a;
    }

    avg=sum/10;
    printf("AVG= %f\n", avg);
}
