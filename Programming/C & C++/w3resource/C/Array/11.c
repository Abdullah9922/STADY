#include<stdio.h>
int main()
{
    int n;
    printf("Input the number of elements to be stored in the array : ");
    scanf("%d",&n);
    printf("------------------------------------------------------------------------\n");
    printf("Input %d elements in the array : \n",n);

    int arr[n];
    for(int i=0; i<n; ++i){
        scanf("%d",&arr[i]);
    }


     for(int i=0; i<n; ++i){
        for(int j=i+1; j<n; ++j){
            if(arr[i] > arr[j]){
                int temp =arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }


    printf("sorted %d elements in the array : ",n);

    for(int i=0; i<n; ++i){
        printf("%d ",arr[i]);

    }



}
