#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of your arry:\n");
    scanf("%d",&n); // inputing the size of arry

    printf("Now input your arry: \n");
    int a[n];
    for(int i=0;i<n;i++)  // inputing the elements of arry
        scanf("%d",&a[i]);

    printf("Your final arry without even number:\n");
    int a2[n];
    int j=0;
    for(int i=0;i<n;i++){
        if(a[i]%2!=0){
            a2[j]=a[i];
            j++;
        }
    }

    for(int i=0;i<j;i++)
        printf("%d ",a2[i]);


}
