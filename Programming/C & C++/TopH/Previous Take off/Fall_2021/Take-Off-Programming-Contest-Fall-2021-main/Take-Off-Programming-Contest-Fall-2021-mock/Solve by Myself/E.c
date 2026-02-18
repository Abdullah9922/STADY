#include<stdio.h>

int main()
{
    int n,q;
    scanf("%d %d",&n,&q);

    int a[n];
    for(int i=1;i<=n;i++)
        scanf("%d",&a[i]);

    float avg=0,sum=0;
    int l,r,count=0;
    while(q--){
        scanf("%d %d",&l,&r);

        for(int i=l;i<=r;i++){
            sum+=a[i];
            count++;
        }
        avg=sum/count;
        //printf("sum= %d count = %d\n",sum,count);
        printf("%.2f\n",avg);
        sum=0,avg=0,count=0;
    }
}
