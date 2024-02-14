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
    // 5 4 3 2 1
    // 4 5 3 2 1  --> 1st if

     for(int i=0; i<n; ++i){
        for(int j=i+1; j<n; ++j){
            if(arr[i] < arr[j]){
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


    int k=0;
    int b[k];
    printf("\nInput the value to be inserted : ");
    scanf("%d",&b[k]);

    printf("\nAfter Insert the list is : ");

    for(int i=0; i<n+1; ++i){
        for(int k=i+1; k<n+1; ++k){
            if(arr[i] < b[k]){
                int temp =arr[i];
                arr[i]=b[k];
                b[k]=temp;
            }
        }
    }

    for(int k=0; k<n+1; ++k){
        printf("%d ",b[k]);
    }



    /*for(int i=0; i<n; ++i){
            if(b[k]>arr[i]){
                b[k]=arr[i];
                k++;
                printf("\n%d ",b[k]);
            }


    }*/




}

