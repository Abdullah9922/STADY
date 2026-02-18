#include<stdio.h>

int main()
{
    int tc;
    scanf("%d",&tc);

    int n,x;
    while(tc--){
        scanf("%d %d",&n,&x);

        int A[n];
        for(int i=0;i<n;i++)
            scanf("%d",&A[i]);

        int B[n];
        for(int i=0;i<n;i++)
            scanf("%d",&B[i]);

        int count=0;
        for(int i=0;i<n;i++){
            if(A[i]>B[i]) count++;
        }

    }
}
