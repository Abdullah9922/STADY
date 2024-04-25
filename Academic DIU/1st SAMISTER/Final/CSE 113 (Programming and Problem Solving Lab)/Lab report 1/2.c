#include<stdio.h>
int main()
{
    int lenght;
    char s1[100];

    gets(s1);

    printf("\nThe string is: ");
    puts(s1);

    printf("\nLenth of the string is: ");
    lenght=strlen(s1);

    printf("%d\n\n",lenght);

}
