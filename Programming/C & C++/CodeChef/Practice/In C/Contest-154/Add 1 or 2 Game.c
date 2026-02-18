#include<stdio.h>

int main()
{
    int tc;
    scanf("%d",&tc);

    int n;
    while(tc--){
        scanf("%d",&n);


        if(n%2==0){
            if(n%4==0) printf("BOB\n");
            else printf("ALICE\n");
        }

        else{
            n = (n-1) /2;
            if(n%2 == 0) printf("ALICE\n");
            else printf("BOB\n");
        }

    }
}
