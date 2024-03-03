#include<stdio.h>
int main()
{

    int i,n,sum=0;
    int *ps;


    scanf("%d",&n);

    int a[n];
    for( i=0;i<n;i++)
        scanf("%d",&a[i]);

    ps=a;
    for(int i=0;i<n;i++){
        sum = sum + *ps;
        ps++;
    }

    printf("Total = %d\n\n",sum);

}
