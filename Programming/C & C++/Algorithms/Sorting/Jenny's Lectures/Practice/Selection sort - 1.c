#include<stdio.h>


int Min(int arr[], int n, int k)
{
    int x, loc;
    x=arr[k];

    for(int i=k+1;i<n;i++){
        if(arr[i] < x){
            x = arr[i];
            loc = i;
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

    int temp,loc,k=0;
    for(int i=0;i<n;i++){
        loc = Min(arr,n,k);
        temp = arr[i];
        arr[i] = arr[loc];
        arr[loc] = temp;
        k++;
    }

    printf("\nSorted array: ");
    for(int i=0;i<n;i++)
        printf("%d  ",arr[i]);

}
