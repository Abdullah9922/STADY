//https://judge.beecrowd.com/en/problems/view/1140
#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    char s1[50]="Flowers Flourish from France";
    char s2[50]="Sam Simmonds speaks softly";
    char s3[50]="Peter pIckEd pePPers";
    char s4[50]="truly tautograms triumph";

    while(1){
        gets(s);
        if(s[0]=='*') break;

        else if(strcmp(s1,s)==1)
            printf("Y\n");

        else if(strcmp(s2,s)==1)
            printf("Y\n");

        else if(strcmp(s3,s)==1)
            printf("Y\n");

        else if(strcmp(s4,s)==1)
            printf("Y\n");

        else
            printf("N\n");


    }
}
