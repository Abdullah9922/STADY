#include<stdio.h>

int main()
{
    int tc;
    scanf("%d",&tc);

    int n;
    while(tc--){
        scanf("%d",&n);

        int max=(n+1)/2;
        int min;

        if(n==1) min=1;
        else min=(n+2)/3;

        printf("%d %d\n",max,min);
    }
}
