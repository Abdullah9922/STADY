//https://judge.beecrowd.com/en/problems/view/2874

#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int Tc;
    while(scanf("%d",&Tc)!=EOF)
    {
        int i,j,k,l;
        char str[9];
        char str1[100001];
        for(l=0;l<Tc;l++)
        {
            scanf("%s",&str);
            int dec=0;
            k=strlen(str);
            int u=k;
            for(j=0;j<k;j++)
            {
                dec=dec+((str[j]-48)*(pow(2,u-(j+1))));
            }
            str1[l]=dec;
        }
        for(l=0;l<Tc;l++)
        {
            printf("%c",str1[l]);
        }
        printf("\n");
    }
    return 0;
}
