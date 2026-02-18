//https://www.w3resource.com/c-programming-exercises/conditional-statement/index.php
#include<stdio.h>
int main()
{
    int a ,b,c;
    printf("Enter three number: ");
    scanf("%d%d%d",&a ,&b,&c);
    if((a>b)&&(a>c))
        printf("The 1st Number is the greatest among three");
    else if(b>c)
        printf("The  2nd Number is the greatest among three");
    else
        printf("The 3rd Number is the greatest among three");
}
