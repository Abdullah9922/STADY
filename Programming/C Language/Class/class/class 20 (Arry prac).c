#include<stdio.h>
int main()
{
    int n,sum=0,cont=0;
    scanf("%d",&n);
    float avg=1;
    int a[100];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(int i=(n/2);i<n;i++){
        sum+=a[i];
        cont++;
    }
    avg=sum/cont;
    printf("%.2f",avg);
}

