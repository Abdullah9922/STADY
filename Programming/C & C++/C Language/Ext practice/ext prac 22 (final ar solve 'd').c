#include<stdio.h>
int main()
{
    char s[100];
    char x,y;

    gets(s);
    scanf("%c %c",&x,&y);

    for(int i=0;s[i]!='\0';i++){
        if(s[i]==x)
            s[i]=y;
    }

    puts(s); // bondu ki kaoabe ni bolo?

}
