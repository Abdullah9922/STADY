#include<stdio.h>
int main()
{
    int n,e,p;
    scanf("%d",&n);

    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(int i=0;i<n;++i)
        printf("%d ",a[i]);


    printf("\nInput the position where to delete: ");
    scanf("%d",&p); // p = position index.


    for(int i=1;i<=n;i++){
        if(i==p){

        }
    }

    for(int i=1,i<=n-1;i++)
        printf("%d ",a[i]);

}
