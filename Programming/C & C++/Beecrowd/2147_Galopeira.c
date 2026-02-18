//https://judge.beecrowd.com/en/problems/view/2147
#include<stdio.h>

int main()
{
    int tc,a;
    double l;
    char s[10000];

    scanf("%d",&tc);

    for(int i=0;i<tc;i++){
        scanf("%s",s);

        a=0;
        while(s[a]!=0)
            a++;

        l=a/100.0;
        printf("%.2lf\n",l);;
    }
}
