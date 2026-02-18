#include<stdio.h>
int main()
{
    int sum=0,i;
    printf("Enter numbers: ");
    do
    {
        scanf("%d",&i);
        if(i>0)
            sum+=i;
        else if(i<0)
            printf("negative number is not alow");

    }
    while(i!=0);
    printf("Sum = %d",sum);

}
