#include<stdio.h>

int fact(int n){

    if(n>0)
        return (n*fact(n-1));
    else
        return 1;

}


int main()
{
    int n;
    scanf("%d",&n);

    int x=fact(n);
    printf("Factorial = %d\n",x);

}



