#include<stdio.h>
int main()
{
    int i, n, a=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=2; i<=n; i=i+2)
        a=a+ pow(i,2);
    printf("%d", a);



}
