#include<stdio.h>

int main()
{
    int tc;
    scanf("%d",&tc);

    char a;
    int h,m,i=1;
    while(tc--){
        scanf("%d %c %d",&h,&a,&m);

        if(h<=12) printf("Case %d: %d:%d AM\n",i++,h,m);
        else if(h>12) printf("Case %d: %d:%d PM\n",i++,(h-12),m);

    }
}
