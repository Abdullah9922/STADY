#include<stdio.h>
int main()
{
    int tc;
    scanf("%d",&tc);

    for(int i=0;i<tc;i++){

        int n,l,r;
        scanf("%d %d %d",&n,&l,&r);

        int a[n];
        for(int j=0;j<n;j++)
            scanf("%d",&a[j]);

        int t=0;
        int contMax=0,contMin=0;

        for(int m=l;m<=r;m++){      // 1 2 3
            for(int j=0;j<n;j++){  // 4 3 2 1
                if(a[j]==m){
                    contMax++;  // 1
                    t++;
                }

            }

            if(t==0){
                contMax--;
                contMin--;
                t=0;
                printf("\nkola\n");
            }
        }

        printf("%d %d\n",contMax,contMin);


    }

}
