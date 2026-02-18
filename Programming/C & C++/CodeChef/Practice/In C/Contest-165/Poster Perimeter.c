#include<stdio.h>
#include <limits.h>
#include <stdlib.h>

int main()
{
    int tc;
    scanf("%d",&tc);

    int n,m,k;
    while(tc--){
        scanf("%d %d %d",&n,&m,&k);

        int min = INT_MAX;

        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){

                int p = 2*(i+j);
                int diff = abs(p - k);
                if(diff<min)
                    min = diff;
            }
        }

        printf("%d\n",min);
    }
}
