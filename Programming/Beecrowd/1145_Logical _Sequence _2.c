//https://judge.beecrowd.com/en/problems/view/1145
#include<stdio.h>
int main()
{
    int a,b,c=1;
    scanf("%d %d",&a,&b);

    for(int i=1;i<=b;i++){
        if(c<=a-1){
            printf("%d ",i);
            c++;
        }
        else{
            printf("%d\n",i);
            c=1;
        }
    }
}

