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

     for(int i=0; i<n; ++i){ // sort in descending order
        for(int j=i+1; j<n; ++j){
            if(arr[i] < arr[j]){
                int temp =arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    printf("sorted %d elements in the array : ",n);
    for(int i=0; i<n; ++i){ // print sorted array
        printf("%d ",arr[i]);
    }

    printf("\nEnter a number that you insert: ");
    int insert,asi;
    scanf("%d",&insert);

    arr[n+1];
    for(int i=0; i<n+1; ++i){ // just assign index
        if(insert>=arr[i]){
            asi=i;
            break;
        }
    }

    for(int i=n-1; i>=asi; --i){// insertion
        arr[i+1]=arr[i];
    }
    arr[asi]=insert;

    for(int i=0; i<n+1; ++i){ // print after inserted array
        printf("%d ",arr[i]);
    }

}
