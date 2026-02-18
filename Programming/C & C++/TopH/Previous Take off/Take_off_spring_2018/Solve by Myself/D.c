#include<stdio.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);

    int arr[b];
    for(int i=0;i<b;i++)
        scanf("%d",&arr[i]);

    int temp=0;
    for(int i=0;i<b;i++){
        if(arr[i]>temp)
            temp=i;
    }
    printf("%d\n",temp);
}
