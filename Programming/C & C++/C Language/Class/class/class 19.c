#include<stdio.h>
int main()
{
    int sum=0;
    float avg=1;
    int a[10];
    for(int i=0;i<10;i++)
        scanf("%d",&a[i]);
    for(int i=5;i<10;i++){
        sum+=a[i];
    }
    avg=sum/5;
    printf("%.2f",avg);
}
