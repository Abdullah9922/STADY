//https://judge.beecrowd.com/en/problems/view/1176
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    long long int arr[61];
    arr[0]=0;
    arr[1]=1;

    for(int i=2;i<61;i++)
        arr[i]=arr[i-1]+arr[i-2];

    for(int i=0;i<n;i++){
        printf("Fib(%d) = %lld\n",a[i],arr[a[i]] );
    }

}
