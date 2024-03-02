#include<stdio.h>
int main()
{
    int i,n,sum=0;
    int *pos;
    int a[n];

    scanf("%d",&n);

    for( i=1;i<=n;i++)
        scanf("%d",&a[i]);

    pos=a;
    for(int i=0;i<n;i++){
        sum = sum + *pos;
        pos++;
    }

    printf("Total = %d\n\n",sum);

}
