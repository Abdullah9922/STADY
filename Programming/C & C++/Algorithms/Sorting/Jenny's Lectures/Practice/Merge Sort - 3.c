#include<stdio.h>


void merge(int a[], int n1, int index1, int b[], int n2, int index2, int c[], int index)
{
    while(n1 && n2){
        if(a[index1] < b[index2]){
            c[index] = a[index1];
            index++;
            index1++;
            n1--;
        }

        else{
            c[index] = b[index2];
            index2++;
            index++;
            n2--;
        }
    }

    while(n1){
        c[index] = a[index1];
        index++;
        index1++;
        n1--;
    }

    while(n2){
        c[index] = b[index2];
        index2++;
        index++;
        n2--;
    }
}

void merge_pass(int a[], int n, int b[], int l)
{
    int lb,q,s,r;
    q = n/(l*2);
    s = 2*l*q;
    r = n-s;

    for(int i=0;i<q;i++){
        lb = 2*i*l;
        merge(a,l,lb,a,l,lb+l,b,lb);
    }

    if(r <= l){
        for(int i=0;i<r;i++)
        b[s+i] = a[s+i];
    }
    else
       merge(a,l,s,a,r-l,s+l,b,s);

}


void merge_sort(int a[], int n)
{
    int b[n];
    int l=1;

    while(l <= n){
        merge_pass(a,n,b,l);
        merge_pass(b,n,a,l*2);
        l = l*4;
    }
}


int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);

    int arr[n];
    printf("Input element: ");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    merge_sort(arr,n);

    printf("\nSorted array: ");
    for(int i=0;i<n;i++)
        printf("%d  ",arr[i]);
}
