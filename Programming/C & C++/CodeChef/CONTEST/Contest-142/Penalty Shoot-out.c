#include<stdio.h>
int main()
{
    int tc;
    scanf("%d",&tc);

    int x,y;
    while(tc--){
        scanf("%d %d",&x,&y);

        if(x==y) printf("YES\n");
        else if(x-y==3 || x-y==2) printf("NO\n");
        else if(x-y==1) printf("YES\n");
        else if(y-x==4 || y-x==3) printf("NO\n");
        else if(y-x==2 || y-x==1) printf("YES\n");

    }
}
