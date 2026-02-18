#include<stdio.h>

int main()
{
    int tc;
    scanf("%d",&tc);

    int n,x;
    while(tc--){
        scanf("%d %d",&n,&x);

        int count=0;
        for(int i=1;i<=n;i++){
            x = i+x;
            if(x%2==0)
                count++;
        }
        printf("%d\n",count);
    }
}
