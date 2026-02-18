#include<stdio.h>
int main()
{
    int sum=0,r,x;
    for(int i=1;i<=1000;i++){
        sum=0;
        x=i;
        while(x>0){
            r=x%10;
            sum+=r*r*r;
            x/=10;
        }
        if(sum==i) printf("%d\n",i);
    }
}
