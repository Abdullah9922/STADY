#include<stdio.h>

int main()
{
    int tc;
    scanf("%d",&tc);

    int r,g,b;
    while(tc--){
        scanf("%d %d %d",&r,&g,&b);

        if(r+g>=b && g+b>=r && r+b>=g)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
