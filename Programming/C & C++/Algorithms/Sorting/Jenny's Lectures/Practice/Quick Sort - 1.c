#include<stdio.h>
#include<stdlib.h>


void swap(int arr[], int pos1, int pos2) {
    int temp = arr[pos1];
    arr[pos1] = arr[pos2];
    arr[pos2] = temp;
}


int partiton(int a[], int lb, int ub)
{
    int p = a[lb];
    int start = lb;
    int end = ub;

    while(start < end){
        while(a[start] <= p) start++;
        while(a[end] > p) end--;

        if(start<end) swap(a,start,end);
    }
    swap(a,lb,end);
    return end;
}


void quick_sort(int a[], int lb, int ub)
{
    if(lb<ub){
        int loc = partiton(a,lb,ub);
        quick_sort(a,lb,loc-1);
        quick_sort(a,loc+1,ub);
    }
}


int main()
{
    int n;
    printf("Enter size of the array: ");
    scanf("%d",&n);

    int a[n];
    printf("Input element: ");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    quick_sort(a,0,n); // n should be n-1.

    printf("\nSorted array: ");
    for(int i=0;i<n;i++)
        printf("%d  ",a[i]);
}
