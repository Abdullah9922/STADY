//https://judge.beecrowd.com/en/problems/view/2760
#include<stdio.h>
int main()
{
    char s1[100],s2[100],s3[100];

    gets(s1);
    gets(s2);
    gets(s3);

    printf("%s%s%s\n",s1,s2,s3);
    printf("%s%s%s\n",s2,s3,s1);
    printf("%s%s%s\n",s3,s1,s2);

    for(int i=0;i<10 && s1[i]!='\0';i++)
        printf("%c",s1[i]);

    for(int i=0;i<10 && s2[i]!='\0';i++)
        printf("%c",s2[i]);

    for(int i=0;i<10 && s3[i]!='\0';i++)
        printf("%c",s3[i]);

    printf("\n");
}
