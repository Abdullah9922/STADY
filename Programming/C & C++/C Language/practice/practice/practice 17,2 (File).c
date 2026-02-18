#include<stdio.h>
#include<stdlib.h>


int main()
{
    char ch;
    FILE *fp = NULL;

    fp = fopen("abc.text","r");
    if(fp){
        printf("ERROR\n");
        exit(1);
    }

    while(!feof(fp)){
        ch = fgetc(fp);
        printf("%c ",ch);
    }

    char str[50];
    fgets(str,5,fp); // 5 is for how many char at once.
    printf("%s",str);


    while(!feof(fp)){
        fgets(str,5,fp);
        printf("%s",str);
    }

    fclose(fp);
}
