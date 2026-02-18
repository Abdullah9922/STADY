//https://judge.beecrowd.com/en/problems/view/1071
#include<stdio.h>
int main()
{
    int i,j,a,b,sum=0;
    scanf("%d %d",&a,&b);  //15 12

    if(a<b){
        for(i=a+1;i<b;i++){
            if(i%2!=0)
                sum=sum+i;
        }
    }
    else if(a>b){
        for(j=b+1;j<a;j++){
            if(j%2!=0)
                sum=sum+j;
        }
    }

    printf("%d\n",sum);

}
