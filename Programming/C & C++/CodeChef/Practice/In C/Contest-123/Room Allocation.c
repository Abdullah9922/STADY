#include<stdio.h>

int main()
{
    int tc;
    scanf("%d",&tc);

    int n;
    while(tc--){
        scanf("%d",&n);

        int a,sum=0;
        for(int i=0;i<n;i++){
            scanf("%d",&a);
            sum+=(a/2) + (a%2);
        }


        printf("%d\n",sum);

    }
}
