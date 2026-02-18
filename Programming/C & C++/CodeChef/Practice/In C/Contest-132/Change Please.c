#include<stdio.h>
int main()
{
    int tc;
    scanf("%d",&tc);

    int x,a,f;
    for(int i=0;i<tc;i++){
        scanf("%d",&x);
        a=100-x;
        f=a/10;
        printf("%d\n",f*10);
    }
}
