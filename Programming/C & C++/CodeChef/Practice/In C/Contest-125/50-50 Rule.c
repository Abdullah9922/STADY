#include<stdio.h>

int main()
{
    int tc;
    scanf("%d",&tc);

    int x,y;
    while(tc--){
        scanf("%d %d",&x,&y);

        if(x<50) printf("Z\n");
        else if(y<50 && x>=50) printf("F\n");
        else printf("A\n");
    }
}
