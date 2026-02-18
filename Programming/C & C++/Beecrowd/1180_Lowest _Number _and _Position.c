//https://judge.beecrowd.com/en/problems/view/1180
#include<stdio.h>
int main()
{
    int n,pos,temp;
    scanf("%d",&n);

    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    temp=a[0];
    pos=0;
    for(int j=1;j<n;j++){
        if(a[j]<temp){
            temp=a[j];
            pos=j;
        }
    }
    printf("Menor valor: %d\n",temp);
    printf("Posicao: %d\n",pos);
}
