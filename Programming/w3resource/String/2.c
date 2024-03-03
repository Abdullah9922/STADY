#include<stdio.h>
int main()
{
    int sum=0;
    char a[100];
    gets(a);
    printf("Your input is: %s",a);

    for(int i=0;a[i]!=NULL;i++)
        sum++;

    printf("\nLength of the string is : %d",sum);
}

