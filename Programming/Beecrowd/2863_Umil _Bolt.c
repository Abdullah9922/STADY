//https://judge.beecrowd.com/en/problems/view/2863
#include<stdio.h>
int main()
{
    int n,x=0;
    float temp=999999.9;

    float a;
    while((scanf("%d",&n))!=EOF){

        for(int i=1;i<=n;i++){
            scanf("%f",&a);
            if(a<temp)
                temp=a;
        }
        printf("%.2f\n",temp);
        temp=999999.9;
    }
}
