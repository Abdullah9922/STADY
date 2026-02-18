#include<stdio.h>

int proFun(int n)
{
    static int a=1,b=2,m,i=2;
    if(i==n){
        printf("%d\n",m);
        return 0;
    }
    else{
        m=a*b;
        a=b;
        b=m;
        i++;
        proFun(n);
    }
}

// tahola bikale ae dik aso ni tume na kaoale ame kaoabo ni chap. OK!

int main()
{
    int n;
    scanf("%d",&n);

    proFun(n);
}
