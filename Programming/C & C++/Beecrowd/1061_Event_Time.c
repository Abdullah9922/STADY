//https://judge.beecrowd.com/en/problems/view/1061


#include<stdio.h>
int main()
{
    int d1,d2;
    int h1,m1,s1;
    int h2,m2,s2;

    char ar[4];
    char ar2[4];
    scanf("%s",ar);
    scanf("%d",&d1);
    scanf("%d : %d : %d",&h1,&m1,&s1);
    scanf("%s",ar2);
    scanf("%d",&d2);
    scanf("%d : %d : %d",&h2,&m2,&s2);

    int sum,day,h,min,rem,sec;

        sum=((86400*d2)+(h2*3600)+(m2*60)+s2)-((86400*d1)+(h1*3600)+(m1*60)+s1);

        day=sum/86400;
        rem=sum%86400;
        h=rem/3600;
        rem=rem%3600;
         min=rem/60;
        sec=rem%60;

    printf("%d dia(s)\n",day);
    printf("%d hora(s)\n",h);
    printf("%d minuto(s)\n",min);
    printf("%d segundo(s)\n",sec);


    return 0;
}
