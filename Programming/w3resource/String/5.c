#include<stdio.h>
#include <string.h>
int main()
{
    int wrd=1;
    char a[100];
    gets(a);
    printf("Your input is: %s\n\n",a);

    for(int i=0;a[i]!=NULL;i++){
        if(a[i]==' ' || a[i]=='\n' || a[i]=='\t')
            wrd++;
    }

    printf("Total number of words in the string is : %d",wrd);

}
