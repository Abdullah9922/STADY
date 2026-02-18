//https://judge.beecrowd.com/en/problems/view/3040

#include<stdio.h>

int main()
{
    int tc;
    scanf("%d",&tc);

    int h,d,g;
    while(tc--){
        scanf("%d %d %d",&h,&d,&g);

        if(h>=200 && h<=300 && d>=50 && g>=150)
            printf("Sim\n");
        else
            printf("Nao\n");
    }
}
