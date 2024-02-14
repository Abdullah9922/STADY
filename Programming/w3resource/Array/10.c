#include<stdio.h>
int main()
{
    int n;
    printf("Input the number of elements to be stored in the array : ");
    scanf("%d",&n);
    printf("------------------------------------------------------------------------\n");
    printf("Input %d elements in the array : \n",n);



    int a[n],e[1000],o[1000];
    int j=0, k=0;


    for(int i=1;i<=n;i++)
    {
        printf("element - %d : ",i);
        scanf("%d",&a[i]);
    }


    for(int i=1;i<=n;i++)
    {
        if (a[i]%2==0)
        {
            e[j]=a[i];
            j++;
        }

        else
        {
            o[k]=a[i];
            k++;
        }

    }

    printf("\nThe Even elements are :");
    for(int i=0; i<j; ++i){
        printf("%d ",e[i]);

    }
    printf("\nThe Odd elements are :");
    for(int i=0; i<k; ++i){

        printf("%d ",o[i]);
    }

printf("\n\n");
}
