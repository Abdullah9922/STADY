//BinarySearch

#include<stdio.h>

int BinarySearch(int a[], int n, int data)
{
    int l = 0, r = n - 1;
    int mid;

    while (l <= r) {
        mid = l + (r - l) / 2;

        if (data == a[mid]) {
            return mid;
        }
        else if (data < a[mid]) {
            r = mid - 1;
        }
        else if (data > a[mid]) {
            l = mid + 1;
        }
    }

    return -1;
}

int main()
{
    int n,data;
    printf("Enter size of the array: ");
    scanf("%d",&n);

    int a[n];
    printf("Input element: ");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Enter element for found: ");
    scanf("%d",&data);

    int x = BinarySearch(a, n, data);

    if (x == -1)
        printf("Element not found.\n");
    else
        printf("Element found at position %d\n", x+1);

    return 0;
}
