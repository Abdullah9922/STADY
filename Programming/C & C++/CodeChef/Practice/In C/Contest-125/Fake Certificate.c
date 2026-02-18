#include<stdio.h>

int main()
{
    int tc;
    scanf("%d",&tc);

    int n;
    while(tc--){
        scanf("%d",&n);

        int i,cont=0,cont2=0,temp=0;
        int a[n];
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);

        if(a[0]==1){
            for(int j=1;j<n;j++){
                if(a[j]==1)
                    cont++;  // cont=3;

                if(a[j]==0){
                    cont2++;

                    if(j==(n-1)){
                        if(temp<cont2)
                            temp=cont2;
                    }
                }

                else if(cont2>temp){
                    temp=cont2;
                    cont2=0;
                }
            }

            if((cont+1)==n){
                printf("%d\n",n);
                return 0;
            }

            else{
                printf("%d\n",temp);
            }
        }

        else if(a[0]==0){
            for(int j=1;j<=n;j++){
                if(a[j]==0)
                    cont++;  // cont=3;  *121*4*7*3*1*2#
            }

            if((cont+1)==n){
                printf("%d\n",n);
                return 0;
            }
        }
    }
}
