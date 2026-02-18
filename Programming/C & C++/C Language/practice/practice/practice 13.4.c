#include<stdio.h>
int main()
{
    char s[3][10];
    int i;
    printf("Enter three name: ");
    for (i=0;i<=2;i++)
        gets(s[i]);    // gets(s[i][0]);    scanf("%s",s[i]);
    for (i=0;i<=2;i++)
        printf("Hi %s\n",s[i]);
}
