//https://judge.beecrowd.com/en/problems/view/2176
#include<stdio.h>
int  main()
{
    char s[10000];
    int cont=0;

    gets(s);

    for(int i=0;s[i]!=0;i++){
        if(s[i]=='1')
            cont++;
        printf("%c",s[i]);
    }

    if(cont%2==0)
        printf("0\n");
    else
        printf("1\n");

}
