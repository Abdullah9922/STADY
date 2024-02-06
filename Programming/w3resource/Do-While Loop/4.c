#include<stdio.h>
int main()
{
    int a,sum=0;
    printf("Enter a series of number: \n");
    do
    {
        scanf("%d\n",&a);
        sum+=a;
    }
    while(a>0);

    printf("Sum = %d",sum);
}
