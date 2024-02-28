#include<stdio.h>
int main()
{
    int n,f,l;
    scanf("%d",&n);

    l=n%10;


    f=n;
    while(f>=10)
    {
        f/=10;
    }
    printf("%d\n",f);
    printf("%d\n",l);



}
