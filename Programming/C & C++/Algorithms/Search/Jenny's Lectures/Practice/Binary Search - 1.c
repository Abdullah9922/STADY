#include<stdio.h>

int BinarySearch(int a[], int data, int n)
{
    int l=0,r=n;

    while(l<r){

        mid = (l+r)/2;

        if(data == a[mid])
            return mid;
        else if(data < a[mid])
            r = mid -1;
        else l = mid +1;

    }
    return -1;
}
