#include<stdio.h>

int fun(int ,int );

int main()
{
    int num,pow,result;
    scanf("%d %d",&num,&pow);
    result=fun(num,pow);
    printf("ANS = %d",result);
}


int fun(int a,int b)
{
    int r=1;
    if(b==0)
        return r;
    r=a*(fun(a,b-1));
}
