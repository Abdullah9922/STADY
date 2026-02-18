#include<stdio.h>

int main()
{
    int tc;
    scanf("%d",&tc);

    int x,y,z;
    while(tc--){
        scanf("%d %d %d",&x,&y,&z);

        if(y-x == z-y){
            printf("0\n");
        }

        else printf("1\n");

    }
}
