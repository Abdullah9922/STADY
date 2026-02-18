#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);

    int t=a-b;

    if(t<18) printf("CSK\n");
    else if(t>=18) printf("RCB\n");
}
