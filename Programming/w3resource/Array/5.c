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
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                x++;
                break;
            }
        }
    }

    printf("\nTotal number of duplicate elements found in the array is : %d",x);

}
