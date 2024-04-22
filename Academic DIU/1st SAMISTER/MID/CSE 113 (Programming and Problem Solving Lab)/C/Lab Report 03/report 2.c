#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    if(a>0)
        printf("%d is a posative number",a);
    else if(a<0)
        printf("%d is a negative number",a);
    else
        printf("The is a Zero");
}
