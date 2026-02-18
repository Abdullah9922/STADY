#include<stdio.h>
#include<math.h>

int main()
{
    int tc;
    scanf("%d",&tc);

    int n;
    for(int i=0;i<tc;i++){
        scanf("%d",&n);

        int a[n];
        int mul=1,x;
        for(int j=0;j<n;j++){
            scanf("%d",&x);
            if(x==1 || x==2) a[j]=x;
            mul*=a[j];
        }
        float y=root(8,mul);
        if(n<=8){
            for(int j=256; j<=pow(2,n); j*=2){
                if (y==j){
                    printf("YES\n");
                    break;
                }
            }
            printf("NO\n");
        }

        else printf("NO\n");

    }
}
