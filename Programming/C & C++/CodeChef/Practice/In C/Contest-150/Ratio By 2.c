#include<stdio.h>

int main()
{
    int tc;
    scanf("%d",&tc);

    int x,y;
    while(tc--){
        scanf("%d %d",&x,&y);  // 8 7

        int big1=x>y?x:y; // big1=8
        int sml1=x>y?y:x;  // sml1=7

        int big2=big1;  // big2=8
        int sml2=sml1;  // sml2=8

        int countK=0,countB=0;

        if(sml1*2<=big1){
            printf("0\n");
            continue;
        }

        else if(x==y){
            if(x%2==0){
                printf("%d\n",x/2);
                continue;
            }
            else{
                printf("%d\n",x/2+1);
                continue;
            }
        }

        else{
            if(!sml1*2<=big1){  //
                countB++;
                sml1++;
            }
            if(!sml2*2<=big2){
                countK++;
                big2--;
            }
        }

        printf("%d\n",countK<countB?countK:countB);

    }
}
