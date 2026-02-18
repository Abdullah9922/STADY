//https://judge.beecrowd.com/en/problems/view/1471
#include<stdio.h>
int main()
{
    int a,b,c,i;

    while(scanf("%d %d",&a,&b)!=EOF)
    {

        int x[a];
        for(i=1; i<=a; i++)
        {
            x[i]=0;
        }
        for(int i=1; i<=b; i++){
        scanf("%d",&c);
        x[c]=1;}

    if(a==b)
        printf("*\n");
    else
    {
        for(int i=1; i<=a; i++)
        {
            if(x[i]==0)
                printf("%d ",i);
        }
        printf("\n");
    }
    }
}
