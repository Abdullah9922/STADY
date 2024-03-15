//https://judge.beecrowd.com/en/problems/view/1101
#include<stdio.h>
int main()
{
    int a,b;
    do{
        int sum=0;
        scanf("%d %d",&a,&b);

        if(a<=0 || b<=0)
            break;

        else{
            for(int i=(a>b?b:a);i<=(a<b?b:a);i++){
                printf("%d ",i);
                sum+=i;
            }
        }
        printf("Sum=%d\n",sum);
        }
    while(a!=0 && b!=0);
}
