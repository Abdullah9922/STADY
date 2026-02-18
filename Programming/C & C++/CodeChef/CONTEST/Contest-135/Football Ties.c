#include<stdio.h>
int main()
{
    int tc;
    scanf("%d",&tc);

    int x,y;
    while(tc--){
        scanf("%d %d",&x,&y);

        if (x==y){
            int a=x%3;
            printf("%d\n",a);
            continue;
        }

        int sml=x<y?x:y;

        int temp=sml%3;

        printf("%d\n",temp);

    }
}
