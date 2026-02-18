//https://judge.beecrowd.com/en/problems/view/1865
#include<stdio.h>
int main()
{
    int tc,a;
    scanf("%d",&tc);

    char ara[1000];
    for(int i=0;i<tc;i++){
        scanf("%s",ara);
        scanf("%d",&a);
        if(ara[0]=='T' && ara[1]=='h' && ara[2]=='o' && ara[3]=='r')
            printf("Y\n");
        else
            printf("N\n");
    }
}
