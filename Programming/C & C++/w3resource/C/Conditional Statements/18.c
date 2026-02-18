#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter your buy and sell amount: ");
    scanf("%d%d",&a,&b);
    c=b-a;
    if(c>0)
        printf("You can booked your profit amount : %d",c);
    else if(c<0)
        printf("You incurred a loss of amount : %d",c);
    else
        printf("No loss and no profit");
}
