#include<stdio.h>

int c(int a[],int n);

int n;
int main(void)
{
    int i,B;
    scanf("%d",&n);

    int a[n];
    for( i=0;i<n;i++)
        scanf("%d",&a[i]);

    B= c(a,n);

    printf("%d is the bigest number in the arry",B);
}


int c(int a[],int n)
{
    int t=a[0];
    for(int i=1;i<=n;i++){
        if(t<a[i]){
            t=a[i];
        }
    }
    return t;
}
