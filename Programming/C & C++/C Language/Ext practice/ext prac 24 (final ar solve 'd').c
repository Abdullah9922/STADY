#include<stdio.h>
int main()
{
    char s[10000];
    gets(s);

    for(int i=0;s[i]!='\0';i++)
        s[i]=s[i]+5;
    // tahola aj sonder dike asio ni amr room ar ae dike?
    for(int i=0;s[i]!='\0';i++)
        printf("%c",s[i]);
}
