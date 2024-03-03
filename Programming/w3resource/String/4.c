#include<stdio.h>
#include <string.h>
int main()
{
    int i,l;
    char a[100];
    gets(a);
    printf("Your input is: %s\n",a);

    printf("The characters of the string are :\n");

    l=strlen(a);
    for (i=l-1; i>=0;i--){
        printf("%c  ",a[i]);
    }
}


