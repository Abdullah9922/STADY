#include<stdio.h>
int main()
{
    int i,x,n;
    scanf("%d",&n);
    scanf("%d",&x);
    int a[n],c[n],z=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        //c[i]=0;
    }

    for(i=n-1;i>=0;i--)
    {
        if(a[i]<=x)
        {
            //c[i]=x/a[i];
            x=x%a[i];
            z++;
        }
    }
    printf("Tami will be back after %d day",z);
    if(z!=1)
        printf("s");
    /*for(i=0;i<n;i++)
    {
        printf("%d of %d\n",c[i],a[i]);
    }*/
    return 0;
}
