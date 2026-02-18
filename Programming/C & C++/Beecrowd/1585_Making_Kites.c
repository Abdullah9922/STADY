//https://judge.beecrowd.com/en/problems/view/1585

#include<stdio.h>

int main()
{
    int tc;
    scanf("%d",&tc);

    int x,y;
    while(tc--){
        scanf("%d %d",&x,&y);

        printf("%d cm2\n",(x*y)/2);
    }
}
