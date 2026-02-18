#include<stdio.h>

void swap(int a[], int p1, int p2)
{
    int temp = a[p1];
    a[p1] = a[p2];
    a[p2] = temp;
}


int partition(int a[], int lb, int ub)
{
    int p = a[lb];
    int start = lb;
    int end = ub;

    while(start<end){

        while(a[start] <= p) start++;
        while(a[end] > p) end--;

        if(start<end) swap(a,start,end);
    }
    swap(a,lb,end);
    return end;
}


void Q_sort(int a[], int lb, int ub)
{
    if(lb<ub){
        int x = partition(a,lb,ub);
        partition(a,lb,x-1);
        partition(a,x+1,ub);
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

    Q_sort(a,0,n);

    printf("\nSorted array: ");
    for(int i=0;i<n;i++)
        printf("%d  ",a[i]);
}

