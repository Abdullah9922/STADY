#include<stdio.h>
int main()
{
    int n,start,end,i,cnt=0;
    scanf("%d%d",&start,&end);

    for(int i=start; i<=end; ++i){
        cnt=0;
        for(int j=2; j<i; ++j){
            if(i%j==0){
                break;
            }
            else{
                cnt++;
            }

        }
        if(i-2 == cnt) printf("%d  ",i);

    }



}
