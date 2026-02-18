#include<stdio.h>
int main()
{
    char s[10000];
    gets(s);

    int l=strlen(s);

    for(int i=0;i<=l;i++){
        if(s[i]=='a' || s[i]=='A' || s[i]=='e' || s[i]=='E' || s[i]=='i' || s[i]=='I' || s[i]=='o' || s[i]=='O' || s[i]=='u' || s[i]=='U')
            s[i]='*';
    }

    puts(s);
}
