#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int a = 10;
    FILE *fp=NULL;

    fp = fopen("abc.txt","w"); // fputc fputs fprintf

    if(fp == NULL){
        printf("Error\n");
        exit(1);
    }

    char ch = 'a';
    fputc(ch,fp);
    //fputc(a,fp); -> also valid.

    char str[50] ="Jenny Katri";
    fputs(str,fp);
    //fputs("Jenny Katri",fp); -> also valid.

    for(int i=0;i != strlen(str);i++)
        fputc(str[i],fp);

    fprintf(fp,"%d %s",a,str);

    fclose(fp);
}
