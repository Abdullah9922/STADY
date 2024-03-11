#include<stdio.h>

int n;
int largenum(int []);

int main()
{
    int l;
    scanf("%d ",&n);

    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    l=largenum(a);

    printf("%d is larger among them",l);

}


int largenum(int a[])
{
    int temp;
    for(int i=0;i<n;i++){
        if(a[i]>a[i+1])
            temp=a[i];
    }

    return temp;
}
