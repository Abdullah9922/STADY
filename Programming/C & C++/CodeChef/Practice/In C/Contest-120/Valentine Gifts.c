#include<stdio.h>

int main()
{
    int tc;
    scanf("%d",&tc);

    int x;
    while(tc--){
        scanf("%d",&x);

        if(x>=127) printf("YES\n");
        else printf("NO\n");
    }
}
