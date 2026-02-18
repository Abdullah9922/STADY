#include<stdio.h>
int main()
{
    int tc;
    scanf("%d",&tc);

    int n;
    while(tc--){
        scanf("%d",&n);

        for(int i=0;i<n;i++)
            printf("%d ",i+1);

        printf("\n");

        for(int i=0;i<n;i++)
            printf("%d ",(i+2)%n+1);

        printf("\n");
    }
}
