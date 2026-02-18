#include<stdio.h>
int main()
{
    int n,mx,mn;
    printf("Input the number of elements to be stored in the array : ");
    scanf("%d",&n);
    printf("------------------------------------------------------------------------\n");
    printf("Input %d elements in the array : \n",n);
    int a[n];
    for(int i=1;i<=n;i++)
    {
        printf("element - %d : ",i);
        scanf("%d",&a[i]);
    }
    mx=10000000;
    mn=-1000000;
    for(int i=1;i<=n;i++)
    {
        if(mn<a[i])
            mn=a[i];
        if(mx>a[i])
            mx=a[i];
    }

    printf("Maximum element is : %d\n", mn);
    printf("Minimum element is : %d\n\n", mx);

}

