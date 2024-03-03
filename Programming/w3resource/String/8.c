#include<stdio.h>
int main()
{
    int i;
    char a[100],b[100];
    gets(a);
    printf("Your input is: %s\n",a);

    for(i=0;a[i]!=NULL;i++){
        b[i]=a[i];
    }
    b[i]='\0';

    printf("\nThe First string is : %s\n", a);
    printf("The Second string is : %s\n", b);
    printf("Number of characters copied : %d\n\n", i);

}

