#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);  // a=10, b=20.

    a=a+b; // a=30, b=20.
    b=a-b; // a=30, b=10.
    a=a-b; // a=20, b=10.

    printf("\n\n a=%d  b=%d\n\n",a,b);
}
