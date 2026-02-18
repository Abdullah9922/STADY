//https://judge.beecrowd.com/en/problems/view/2826
#include<stdio.h>
int main ()
{
    char s1[1000],s2[1000];

    gets(s1);
    gets(s2);

    if(strcmp(s1,s2)>0){
        printf("%s\n",s2);
        printf("%s\n",s1);
    }

    else if(strcmp(s1,s2)<0){
        printf("%s\n",s1);
        printf("%s\n",s2);
    }
}
