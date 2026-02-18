//https://judge.beecrowd.com/en/problems/view/1936
#include<stdio.h>
int main()
{
    int a[10] = {1,2,6,24,120,720,5040,40320,362880};
    int n,x;

    scanf("%d",&n);
    x=0;

    for(int i=7; i>=0; --i)
        x+=n/a[i], n%=a[i];


    printf("%d\n",x);

}
