#include<stdio.h>

int main()
{
    int tc;
    scanf("%d",&tc);

    int n,k;
    while(tc--){
        scanf("%d %d",&n,&k);

        int x = k%n;

        if(x==10 || x==11 || x==12)
            printf("YES\n");


        else if(k<10) printf("NO\n");


        else if(1){

            while(1){
                int rem=k%10;

                //printf("\n\n--->%d\n\n",rem);

                if(rem<10){
                    printf("NO\n");
                    break;
                }

                if(rem%10==0){
                    printf("YES\n");
                    break;
                }

                if(rem%11==0){
                    printf("YES\n");
                    break;
                }

                if(rem%12==0){
                    printf("YES\n");
                    break;
                }
            }
        }
    }
}
