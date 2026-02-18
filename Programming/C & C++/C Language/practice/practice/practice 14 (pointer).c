#include<stdio.h>
main()
{
    int a=5;
    scanf("%d",&a);
    printf("%d\n",&a);//here & is the address of a
    printf("%d",*&a);//&a is the address of a and * print by using address
}
