#include<stdio.h>

int main()
{
    int  tc;
    scanf("%d",&tc);

    int n;
    while(tc--){
        scanf("%d",&n);

        int count=0;
        while(n>0){
            count+= n & 1;
            n >>= 1;
        }

        if(count%2==0) printf("EVEN\n");
        else printf("ODD\n");
    }
}
