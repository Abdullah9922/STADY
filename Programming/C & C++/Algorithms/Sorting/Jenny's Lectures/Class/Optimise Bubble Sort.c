#include<stdio.h>

int main()
{
    int n;
    printf("Enter the array size: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter elements: ");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    int temp,k = 0;
    for(int i=0;i<n;i++){
        int flag =0;

        for(int j=0;j<n-1;j++){
            if(arr[i] < arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                flag = 1;
                k++;
            }
        }
        if(flag == 0) break;
    }

    printf("Ascending order: ");
    for(int i=0;i<n;i++)
        printf("%d  ",arr[i]);

    printf("\npasses: %d\n",k);
}

