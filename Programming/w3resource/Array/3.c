#include<stdio.h>
int main()
{
    int n,s=0;
    printf("Input the number of elements to be stored in the array : ");
    scanf("%d",&n);
    printf("------------------------------------------------------------------------\n");
    printf("Input %d elements in the array : \n",n);
    int a[n];
    for(int i=1;i<=n;i++)
    {
        printf("element - %d : ",i);
        scanf("%d",&a[i]);
        s=s+a[i];
    }

    printf("\nSum of all elements stored in the array is : %d",s);
}
