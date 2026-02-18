//https://judge.beecrowd.com/en/problems/view/2866

#include <stdio.h>
#include <string.h>

int main()
{
    int c,a;
    scanf("%d",&c);
    for(a=0;a<c;a++)
    {
        char str[101];
        scanf("%s",&str);
        int i,j,l;
        l=strlen(str);
        for(i=l-1;i>=0;i--)
        {
            if(str[i]>='a' && str[i]<='z')
            {
                printf("%c",str[i]);
            }
        }
        printf("\n");
    }
    return 0;
}

