#include<stdio.h>

int main()
{
    int tc;
    scanf("%d",&tc);

    int d,x,y;
    while(tc--){
        scanf("%d %d %d",&d,&x,&y);

        int count=1,count2=0,D=d;
        if(x==y) printf("0\n");
        else{
            while(count!=y && D!=100){  // 26 15
                if(x*((100.0-D)/100)==y-count){
                    printf("%d\n",count);
                    count2++;
                    break;
                }
                else{
                    count++;
                    D=D+d;
                }
            }
            if(count2==0)
                printf("-1\n");
        }
    }

}
