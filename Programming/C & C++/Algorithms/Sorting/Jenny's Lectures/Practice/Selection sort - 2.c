// selection sort

#include<stdio.h>


int Min(int arr[], int n, int k)
{
    int temp = arr[k],loc;

    for(int i=k;i<n;i++){
        if(arr[i]<=temp){
            temp = arr[i];
            loc=i;
        }
    }
    return loc;
}


int main()
{
    int n;
    printf("Enter size of the array: ");
    scanf("%d",&n);

    int arr[n];
    printf("Input element: ");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    int temp,loc,k;
    for(int i=0;i<n;i++){

        k=i;
        loc=Min(arr,n,k);

        temp = arr[i];
        arr[i] = arr[loc];
        arr[loc] = temp;
    }

    printf("\nSorted array: ");
    for(int i=0;i<n;i++)
        printf("%d  ",arr[i]);
}
