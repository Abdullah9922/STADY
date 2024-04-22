#include<stdio.h>
main()
{
    char str1[100],str2[100];

    gets(str1);
    gets(str2);

    puts(str1);
    puts(str2);


    int a,b;
    a=strlen(str1);
    b=strlen(str2);


    printf("Length of string 1: %d\n",a);
    printf("Length of string 2: %d\n",b);


    if(strcmp(str1,str2))
        printf("Strings are not same.\n");
    else
        printf("Strings are same.\n");

    strcpy(str1,str2);
    printf("string 2 in copy in string 1:\n");
    puts(str1);


    printf("Reverc string 1 :\n");
    strrev(str1);
    puts(str1);
}
