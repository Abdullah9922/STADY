//https://judge.beecrowd.com/en/problems/view/1132
#include<stdio.h>
int main()
{
    int a,b,sum=0;
    scanf("%d %d",&a,&b);

    if(a<b){
        for(int i=a;i<=b;i++){
            if(i%13!=0){
                sum+=i;
            }
        }
    }
    else
        for(int i=b;i<=a;i++){
            if(i%13!=0){
                sum+=i;
            }
        }

    printf("%d\n",sum);

}
