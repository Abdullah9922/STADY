#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int a[n];
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("The elements you entered are : \n");
    for(int i=1;i<=n;i++)
    {
        printf("%d\n",a[i]);
    }


}
