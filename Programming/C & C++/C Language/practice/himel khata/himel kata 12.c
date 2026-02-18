#include<stdio.h>
int main()
{
    int y;
    printf("Enter a year: ");
    scanf("%d",&y);
    if (y%400==0)
        printf("\n\n%d is a leap year", y);
    else if ((y%100!=0)&&(y%4==0))
        printf("\n\n%d is a leap year", y);
    else
        printf("\n\n%d is not a leap year", y);
}
