#include<stdio.h>

int main()
{
    int n;
    printf("Enter size of the array: ");
    scanf("%d",&n);

    int arr[n];
    printf("Input element: ");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    int temp,j;
    for(int i=1;i<n;i++){
        temp = arr[i];
        j=i-1;
        while(j>=0 && arr[j] > temp){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }

    printf("\nSorted array: ");
    for(int i=0;i<n;i++)
        printf("%d  ",arr[i]);

}
