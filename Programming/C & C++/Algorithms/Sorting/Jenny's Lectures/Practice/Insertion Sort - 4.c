#include<stdio.h>

int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);

    int a[n];
    printf("Input element: ");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    int temp,j;
    for(int i=1;i<n;i++){
        temp = a[i];
        j = i-1;

        while(j>=0 && temp < a[j]){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = temp;
    }


    printf("\nSorted array: ");
    for(int i=0;i<n;i++)
        printf("%d  ",a[i]);
}

