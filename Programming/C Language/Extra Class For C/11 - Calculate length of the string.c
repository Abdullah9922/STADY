#include<stdio.h>
#include<string.h>

int main()
{
    char s[100],s2[100];
    int i,j;
    printf("Enter a string: ");
    gets(s);  // gets(&s[0]); => ae 2ta line same mean kora

    for(i=0;s[i]!='\0';i++);

    printf("Lenth = %d",i);



    printf("\nEnter another string: ");
    gets(s2);

    j=strlen(s2);  // int strlen(char*)

    printf("2nd Lenth = %d",j);
}
