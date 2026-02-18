//https://judge.beecrowd.com/en/problems/view/1038
#include<stdio.h>
int main()
{
    float x,y;
    scanf("%f %f",&x,&y);

    if(x==1)
        printf("Total: R$ %.2f\n",(4.00*y));

    if(x==2)
        printf("Total: R$ %.2f\n",(4.50*y));

    if(x==3)
        printf("Total: R$ %.2f\n",(5.00*y));

    if(x==4)
        printf("Total: R$ %.2f\n",(2.00*y));

    if(x==5)
        printf("Total: R$ %.2f\n",(1.50*y));

}
