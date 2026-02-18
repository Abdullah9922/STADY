#include<stdio.h>

int main()
{
    int tc;
    scanf("%d",&tc);

    int n,k;
    while(tc--){
        scanf("%d %d",&n,&k);

        int p=0,o=0,e=0,flag=0;
        int prm[n],odd[n],even[n];
        for(int i=1;i<=n;i++){

            if(i==1){
                odd[o]=i;
                o++;
                continue;
            }

            for(int j=2;j<=(i-1);j++){
                if(i%j==0) flag++;
            }
            if(flag==0){
                prm[p]=i;
                p++;
                continue;
            }
            if(i%2!=0){
                odd[o]=i;
                o++;
                continue;
            }
            if(i%2==0){
                even[e]=i;
                e++;
                continue;
            }
        }

        printf("%d %d %d\n",p/k,o/k,e/k);
/*
        printf("\n");
        for(int i=0;i<p;i++)
            printf("%d+",prm[i]);
        printf("\n");

        for(int i=0;i<o;i++)
            printf("%d-",odd[i]);
        printf("\n");

        for(int i=0;i<e;i++)
            printf("%d*",even[i]);
        printf("\n");
*/
    }
}
