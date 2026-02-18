//https://judge.beecrowd.com/en/problems/view/3088

#include<stdio.h>
int main()
{
    char str[10000];
    while(scanf("%s",str)!=EOF)
    {

        int i,j,flag=1;
        for(i=0;str[i]!='\0';i++)
        {
            if((str[i]==' ' && str[i+1]=='.' || str[i+1]==',' )&& flag)
            {
                flag=0;
                continue;
            }
            else{
                printf("%c",str[i]);
            }
        }
        printf("\n");
    }
    return 0;
}
