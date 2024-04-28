//https://judge.beecrowd.com/en/problems/view/2160
#include<stdio.h>
#include<string.h>

int main()
{
    int l=0;
    char s[10000];

    gets(s);

    for(int i=0;s[i]!=NULL;i++)
        l++;

    if(l<=80)
        printf("YES\n");

    else if(l>80)
        printf("NO\n");
}
