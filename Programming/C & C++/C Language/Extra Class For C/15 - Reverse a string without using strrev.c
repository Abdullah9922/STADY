#include<stdio.h>
int main()
{
    int l,i,temp;
    char s[100];

    printf("Enter a string: \n");
    gets(s);

    for(l=0;s[l];l++);
    for(i=0;i<=l/2;i++){
        temp=s[i];
        s[i]=s[l-1-i];
        s[l-1-i]=temp;

    }

    printf("New string: \n");
    puts(s);
}
