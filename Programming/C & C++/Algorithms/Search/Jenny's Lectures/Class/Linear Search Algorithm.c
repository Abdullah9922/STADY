// Linear search

#include<stdio.h>

int main()
{
    int a[] = {15,5,20,35,2,42,67,17};

    int found =0, data =42;

    for(int i=0;i<8;i++){
        if(a[i]==data){
            printf("Element found at index: %d\n",i+1);
            found++;
            break;
        }
    }

    if(found ==0)
        printf("Element not found.\n");
}
