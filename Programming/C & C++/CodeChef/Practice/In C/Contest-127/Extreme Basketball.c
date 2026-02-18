#include<stdio.h>
int main()
{
    int tc;
    scanf("%d",&tc);

    int a,b;
    for(int i=0;i<tc;i++){
        scanf("%d %d",&a,&b);

        if(a-b>=10){
            printf("0\n");
            continue;
        }

        int t=10+b;
        t=t-a;

        if(t%3==0) printf("%d\n",t/3);
        else if (t%3!=0 && t%2==0) printf("%d\n",t/2);
        else if(t%3!=0 && t%2!=0){
            t=t+1;
            if(t%3==0) printf("%d\n",t/3);
            else if(t%2==0) printf("%d\n",t/2);
        }

    }
}
