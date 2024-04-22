//https://judge.beecrowd.com/en/problems/view/1172
#include<stdio.h>
int main()
{
    int a[10];

    for(int i=0;i<10;i++)
        scanf("%d",&a[i]);

    for(int i=0;i<10;i++){
        if(a[i]<=0)
            printf("X[%d] = %d\n",i,1);
        else if(a[i]>=0)
            printf("X[%d] = %d\n",i,a[i]);
    }
}
