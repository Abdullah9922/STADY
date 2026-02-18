#include<stdio.h>

int main()
{
    int tc;
    scanf("%d",&tc);

    int a,b,x;
    while(tc--){
        scanf("%d %d %d",&a,&b,&x);

        int area1=a*b;
        int area2=x*x;

        int count=0;
        if(area1<area2){
            printf("0\n");
            continue;
        }

        else{
            while(a!=1){
                a=a-1;
                area1=a*b;
                if(area1<=area2){
                    printf("1\n");
                    count++;
                    break;
                }
            }
            if(count==0)
                printf("2\n");
        }
    }
}
