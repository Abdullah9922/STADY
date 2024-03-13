#include<stdio.h>
#include<string.h>

char a[100];
char rev(char a[]);

int main()
{
    char s;


    gets(a);
    s=rev(a);
    puts(s);
}

char rev(char a[])
{
    static int i=0;
    static char ra[100];
    if(a[i]!=NULL){
        //rev(a+1);
        ra[i]=a[i];
        i++;
        puts(ra);
        rev(a);
    }
    return ra;
}
