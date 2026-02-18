//https://judge.beecrowd.com/en/problems/view/2765

#include <stdio.h>
#include <string.h>

int main(void)

{
    char str[500];
    int i=0, j, x;

    while (gets(str) !=0)
    {
        x=strlen(str);
        i=0;
        while (str[i]!=',')
        {
            printf("%c", str[i]);
            ++i;
        }

        printf("\n");

        for (j=++i; j  <  x; ++j)
            printf("%c", str[j]);

        printf("\n");
    }
}

