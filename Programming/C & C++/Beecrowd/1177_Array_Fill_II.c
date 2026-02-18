// https://judge.beecrowd.com/en/problems/view/1177

#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    for(int i=0,j=0;i<1000;i++,j++){

        if(j == n) j = 0;

        printf("N[%d] = %d\n",i,j);
    }
}
