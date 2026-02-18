#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(int i=0;i<n;i++){
        if(a[i]==0 && n>=2){
            printf("Solution Achhe Habibi!\n");
            return 0;
        }
    }
    printf("Beriye jao, beyadob kothakar!\n");
}
