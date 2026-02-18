#include<stdio.h>


void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}



void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] < arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}


int main()
{
    int tc;
    scanf("%d",&tc);

    int n;
    int sum=0;
    for(int i=0;i<tc;i++){
        scanf("%d",&n);

        int a[n];
        for(int j=0;j<n;j++)
            scanf("%d",&a[j]);

        bubbleSort(a, n);


        if(n%2!=0){
            for(int l=0;l<=(n/2);l++)
                sum=sum+a[l];

            for(int j=((n/2)+1);j<n;j++)
                sum-=a[j];
        }
        else{
            for(int j=0;j<=((n/2)-1);j++)
                sum+=a[j];
            for(int j=(n/2);j<n;j++)
                sum-=a[j];
        }

        printf("%d\n",sum);
        sum=0;
    }


}


