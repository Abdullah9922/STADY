#include<stdio.h>

int main()
{
    int tc;
    scanf("%d",&tc);

    int n;
    while(tc--){
        scanf("%d",&n);

        int even=0,odd=1;
        for(int i=2;i<n;i++){
            if(n%i == 0){
                if(i%2 == 0) even++;
                else odd++;
            }
        }

        if(n%2 == 0) even++;

        if(even>odd) printf("1\n");
        else if(even == odd) printf("0\n");
        else printf("-1\n");

    }
}
