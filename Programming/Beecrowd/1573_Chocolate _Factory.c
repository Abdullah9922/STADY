//https://judge.beecrowd.com/en/problems/view/1573
#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c,v,x;

    while (1){
        scanf("%d %d %d",&a,&b,&c);

        if(a==0 && b==0 && c==0) break;

        v=a*b*c;
        x=(int) cbrt((double)v);
        printf("%d\n",x);

    }
}
