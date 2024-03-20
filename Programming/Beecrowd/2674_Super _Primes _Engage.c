//https://judge.beecrowd.com/en/problems/view/2674
#include<stdio.h>
int main()
{
    int x,n,a,cont=0;
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        scanf("%d",&a);
        for(int j=2;j<=a;j++){
            if(a%j==0)  // 11%2
                cont++;
        }
        if(cont>0)
            printf("Nada\n");

        else if(cont==0){  // 43%10
            x=a%10;
            a=a/10;
            for(int k=2;k<=x;k++){
                if(x%k==0)  //x=3
                    printf("Primo\n");
            }
        }

        else
            printf("Super\n");

    }
}
