#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    int a;
    scanf("%d",&a);

    int cont=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1) cont++;
    }

    if(cont>=a) printf("Yes, Rahat ar biye hobe\n");
    else printf("Iss Rahat ae biye ta holo na\n");
}
