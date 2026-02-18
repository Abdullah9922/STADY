#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    scanf("%d",&tc);
    for(int cs = 1; cs <= tc; ++cs){
        int n,m;
        char c;
        scanf("%d %d %c",&n,&m,&c);
        int Count[200];
        memset(Count,0,sizeof(Count));
        for(int i = 0; i < n; i++){
            int x;
            scanf("%d",&x);
            Count[x]++;
        }
        for(int i = 0; i < m; i++){
            int x;
            scanf("%d",&x);
            Count[x]++;
        }
        int ans[100];
        int j = 0;
        if(c == 'U'){
            for(int i = 0; i <= 100; i++){
                if(Count[i] != 0){
                    ans[j++] = i;
                }
            }
        }else{
            for(int i = 0; i <= 100; i++){
                if(Count[i] > 1){
                    ans[j++] = i;
                }
            }
        }
        printf("Case #%d: ",cs);
        for(int i = 0; i < j; i++){
            printf("%d",ans[i]);
            if(i == j-1)printf("\n");
            else printf(" ");
        }
    }
    return 0;
}
