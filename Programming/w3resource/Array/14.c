#include<stdio.h>
int main()
{
    int n,e,p;
    scanf("%d",&n);

    int a[n];
    for(int i=1;i<=n;i++)
        scanf("%d",&a[i]);

    for(int i=1;i<=n;i++)
        printf("%d ",a[i]);

    a[n+1];
    printf("\nEnter a new element: ");
    scanf("%d",&e);
    printf("\nEnter a position for new element: ");
    scanf("%d",&p);// p = position of new element.

    for(int i=n-1;i>=p;--i){
        a[n+1]=a[n];
    }
    a[p]=e;

    for(int i=1;i<=n+1;i++)
        printf("%d\n",a[i]);

}
