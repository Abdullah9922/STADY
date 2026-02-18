#include<stdio.h>
int main()
{
    int n;
    printf("Input the number of elements to be stored in the array : ");
    scanf("%d",&n);
    printf("------------------------------------------------------------------------\n");
    printf("Input %d elements in the array : \n",n);
    int x,a[n];
    for(int i=1;i<=n;i++)
    {
        printf("element - %d : ",i);
        scanf("%d",&a[i]);

    }

     printf("\nThe unique elements found in the array are: %d",x);
}
