#include<stdio.h>
int main()
{
    int a,b,sum=0;
    scanf("%d %d ",&a,&b);

    int x[a];
    for(int i=1;i<=a;i++){
        scanf("%d",&x[i]);
    }
    for(int i=1;i<=a;i++){
        sum+=x[i];
    }
    if(sum>b)
        printf("Sesh Dhaka Sesh!\n");
    else
        printf("Dhaka Bicha Gase!\n");
}
