#include<stdio.h>
int main()
{
    int n,i=0,dec=0,d;
    scanf("%d",&n);

    while(n!=0){
        d=n%10;
        dec=dec+d*pow(2,i);
        n=n/10;
        i++;
    }
    printf("%d",dec);
}
