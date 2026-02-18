#include<stdio.h>


void swap(int arr[], int pos1, int pos2) {
    int temp = arr[pos1];
    arr[pos1] = arr[pos2];
    arr[pos2] = temp;
}


void max_heapify(int a[], int n, int i)
{
    int lergest = i;
    int l = 2*i;
    int r = (2*i)+1;

    while(l <= n && a[l] > a[lergest])
        lergest = l;
    while(r <= n && a[r] > a[lergest])
        lergest = r;

    if(lergest != i){
        swap(a,lergest,i);
        max_heapify(a,n,lergest);
    }
}


void heap_sort(int a[], int n)
{
    for(int i=n/2; i>=1; i--)
        max_heapify(a,n,i);

    for(int i=n; i>=1; i--){
        swap(a,1,i);
        max_heapify(a,n,1);
    }
}


int main()
{
    int n;
    printf("Enter size of the array: ");
    scanf("%d",&n);

    int a[n];
    printf("Input element: ");
    for(int i=1;i<=n;i++)
        scanf("%d",&a[i]);

    heap_sort(a,n);

    printf("\nSorted array: ");
    for(int i=1;i<=n;i++)
        printf("%d  ",a[i]);
}
