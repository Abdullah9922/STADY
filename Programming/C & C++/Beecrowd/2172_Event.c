//https://judge.beecrowd.com/en/problems/view/2172
#include<stdio.h>
int main()
{
    int b,c;
    while(1){
        scanf("%d %d",&b,&c);
        if(b==0 && c==0)
            break;
        else
            printf("%d\n",b*c);
    }
}
