//https://judge.beecrowd.com/en/problems/view/1173

#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    for(int i=0;i<10;i++){
        printf("N[%d] = %d\n",i,n);
        n = n*2;
    }
}
