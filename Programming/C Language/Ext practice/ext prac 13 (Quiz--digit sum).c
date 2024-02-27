#include<stdio.h>
int main()
{
    int n,a,sum=0;
    scanf("%d",&n);

    for(int i=10;i<=n;i*=10){
        a=n%i;
        sum+=a;
    }
    printf("Sum = %d",sum);

}
