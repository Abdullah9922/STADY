#include<stdio.h>
int main()
{
    int tc;
    scanf("%d",&tc);

    int n;
    for(int i=0;i<tc;i++){
        scanf("%d",&n);
        if(n%2==0){
            if(n==2) printf("1\n");
            else if(n==4) printf("1\n");
            else{
                if(n%4==0) printf("%d\n",n/4);
                else printf("%d\n",(n/4)+1);
            }
        }
    }
}
