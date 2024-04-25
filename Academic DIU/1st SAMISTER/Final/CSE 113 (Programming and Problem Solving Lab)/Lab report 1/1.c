#include<stdio.h>
#include<string.h>

int main()
{
    char s1[100],s2[100];

    gets(s1);
    gets(s2);

    printf("\nFirst string is: ");
    puts(s1);

    printf("\nSecond string is: ");
    puts(s2);

    printf("Concatenate two string:\n");

    strcat(s1,s2);

    puts(s1);
}
