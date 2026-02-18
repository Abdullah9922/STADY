//https://judge.beecrowd.com/en/problems/view/1175

#include<stdio.h>

int main()
{
    int arr[20];
    for(int i=0;i<20;i++)
        scanf("%d",&arr[i]);

    for(int i=0,j=19;i<20 && j>=0;i++,j--)
        printf("N[%d] = %d\n",i,arr[j]);
}
