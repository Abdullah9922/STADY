//https://judge.beecrowd.com/en/problems/view/1547
#include<stdio.h>
int main()
{
    int n,a,b,c,x,x2=0,pos=0;
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        scanf("%d %d",&a,&c);
        for(int i=1;i<=a;i++){
            scanf("%d",&b);
            if(b==c)
                pos=i+1;
            else{
                x=c-b;  // x=
                if(x2>x){
                    x2=x;  // x2=5
                    pos=i+1;
                }
            }

        }
        printf("%d\n",pos);
        pos=0;
    }
}
