#include<stdio.h>

int main()
{
    int tc;
    scanf("%d",&tc);

    int r1,r2,r3,r4,r5;
    while(tc--){
        scanf("%d %d %d %d %d",&r1,&r2,&r3,&r4,&r5);

        int sum = r1+r2+r3+r4+r5;

        if(sum>=4) printf("YES\n");
        else printf("NO\n");
    }
}
