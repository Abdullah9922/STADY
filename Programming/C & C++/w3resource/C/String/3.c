#include<stdio.h>
int main()
{

    char a[100];
    gets(a);
    printf("Your input is: %s\n",a);

    printf("The characters of the string are :\n");

    for (int i=0; a[i]!=NULL;i++){
        printf("%c  ",a[i]);
    }
}

