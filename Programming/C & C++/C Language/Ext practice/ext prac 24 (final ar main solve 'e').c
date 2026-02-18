#include<stdio.h>
#include<string.h>
int main()
{
    char s[10000];
    gets(s);

    int l=strlen(s);

    char s2[10000];
    int cont=0;
    for(int i=l;i>=0;i--){
        s2[cont]=s[i];
        ++cont;
    }

    puts(s2);
    printf("\n");
    for(int i=0;i<=l;i++){
        if(s[i]!=s2[i]){
            printf("Not a palindrome\n");
            return 0;
        }
    }

    printf("Palindrome\n");

}
