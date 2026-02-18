#include<stdio.h>


void swap (int *,int *);

int main()
{
    int n1,n2;
    printf("Input 2 number for swap");

    printf("\nFirst number is: ");
    scanf("%d",&n1);

    printf("Second number is ");
    scanf("%d",&n2);

    printf("Before swap First num and Second um is %d and %d\n",n1,n2);

    swap();

    printf("Before swap First num and Second um is %d and %d\n",n1,n2);
}


void swap (void)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;

}
