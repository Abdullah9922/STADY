#include<stdio.h>

int main()
{
    int tc;
    scanf("%d",&tc);

    int x,y;
    while(tc--){
        scanf("%d %d",&x,&y);  // 2 10


        if(x>=2){
            if(y<x-1) printf("0\n");  //
            else{
                if(y==x-1) printf("1\n");  // 10==1
                else printf("%d\n",y-(x-2));  //
            }
        }
    }
}
