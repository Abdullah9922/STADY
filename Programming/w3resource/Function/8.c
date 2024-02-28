#include<stdio.h>
int main(void)
{
    int i,n,B;
    scanf("%d",&n);

    int a[n];
    for( i=0;i<n;i++)
        scanf("%d",&a[i]);

    B= c(a[i]);

    printf("%d is the bigest number in the arry",B);
}


int c(int a[])
{
    int i=1;
    int t=a[0];
    for(int i=1;i<=n;i++){
        if(t<a[i]){
            t=a[i];
            i++;
        }
    }
    return t;
}
