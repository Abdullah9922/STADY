//https://www.beecrowd.com.br/judge/en/problems/view/1019
#include<stdio.h>
int main()
{
    int N,a,a1,b,b1,c;
    scanf("%d",&N);
    a=N/3600;
    a1=N%3600;
    b=a1/60;
    b1=a1%60;
    c=b1;
    printf("%d:%d:%d\n",a,b,c);
}
