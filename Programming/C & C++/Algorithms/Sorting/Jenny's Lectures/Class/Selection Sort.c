#include<stdio.h>

int Min(int arr[], int n, int k)
{
    int loc, min;
    min = arr[k];
    loc = k;

    for (int i = k+1; i<n; i++){

        if(arr[i] < min){
            min = arr[i];
            loc = i;
        }
    }
    return loc;
}


int main()
{
    int arr[] = {33, 11, 66, 88, 99, 77, 44, 55, 22, 1};
    int k,temp,loc;

    for(int k=0;k<9;k++){
        loc = Min(arr,10,k);
        temp = arr[k];
        arr[k] = arr[loc];
        arr[loc] = temp;
    }

    for(int i=0;i<10;i++)
        printf("%d  ",arr[i]);

}
