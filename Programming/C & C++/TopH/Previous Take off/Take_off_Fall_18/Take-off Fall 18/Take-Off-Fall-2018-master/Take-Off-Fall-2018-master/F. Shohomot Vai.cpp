#include <stdio.h>
#include <math.h>
int main() {
    int t;
    scanf("%d",&t);
    for(int ts = 1; ts<=t ; ts++){
        int k, n,m;
        scanf("%d%d%d",&k,&n,&m);
        int cnt = 0;
        char ch;
        for(int i =0;i<n;i++){
            for(int j=0;j<m;j++){
                scanf(" %c",&ch);
                if(ch=='A')cnt++;
            }
        }
        printf("Case %d: %d\n",ts,k*cnt);
        for(int i = 0;i<k*cnt;i++){
            printf("Shohomot Vai\n");
        }
    }
    return 0;
}
