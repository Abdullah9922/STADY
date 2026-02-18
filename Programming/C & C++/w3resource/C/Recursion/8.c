#include<stdio.h>

int n;
int larger(int a[]);

int main()
{
    int ans;
    scanf ("%d",&n);

    int a[n];
    for(int i=1;i<=n;i++)
        scanf("%d", &a[i]);

    ans=larger(a);

    printf("Largest element of an array is: %d",ans);
}


int larger(int a[])
{
    static int i=0,temp=-9999;
    if(i<n){
        if(a[i]>temp); // 8 4 10 2 3
            temp=a[i];
        i++;
        larger(a);
        }
        return temp;
}
