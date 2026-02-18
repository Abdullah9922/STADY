#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    if(n==4) printf("Invalid\n");
    else if(n%3==0) printf("Epuilateral\n");
    else printf("Isosceles\n");

}
