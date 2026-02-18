#include<stdio.h>

int main()
{
    int tc;
    scanf("%d",&tc);

    int a,b;
    int index,temp=0;
    while(tc--){

        for(int i=1;i<=22;i++){
            scanf("%d %d",&a,&b);

            int score=0;
            score=a+(b*20);

            if(score>temp){
                temp=score;
                index=i;
            }
        }

        printf("%d\n",index);
        temp=0;
    }
}
