#include<stdio.h>
int main()
{
    int a,b,j;
    scanf("%d %d",&a,&b);

    for(int i=a+1;i<=b-1;i++){
        for(j=2;j<i;j++)
            if(i%j==0)
                break;

        if(i==j)
            printf("%d ",i);
    }
}
