
#include<stdio.h>
int main()
{
    int n, sum=0;
    scanf("%d",&n);

    int a[n];
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
        sum+=a[i];
    }

    for(int i=1;i<=n;i++){
        printf("%d  ",a[i]);
    }

    printf("\nSUM= %d",sum);



}
