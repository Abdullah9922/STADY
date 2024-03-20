//https://judge.beecrowd.com/en/problems/view/1397
#include<stdio.h>
int main()
{
    int n,a,b,p1=0,p2=0;

    for( ; n!=0 ; ){
        scanf("%d",&n);
        if(n!=0 ){
            for(int i=1;i<=n;i++){
                scanf("%d %d",&a,&b);
                if(a>b)
                    p1++;
                else if(a<b)
                    p2++;
            }

        printf("%d %d\n",p1,p2);
        p1=0;
        p2=0;
        }
        else
            break;

    }

}
