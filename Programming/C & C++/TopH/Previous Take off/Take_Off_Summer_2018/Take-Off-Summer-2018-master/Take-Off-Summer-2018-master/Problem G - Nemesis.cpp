#include <bits/stdc++.h>
using namespace std;
long long calc(long n){
    return n*(n+1)/2;
}
int main(){
    int testCase;
    scanf("%d",&testCase);
    for(int cs = 1; cs <= testCase ; ++cs){
        int n,m;
        scanf("%d %d",&n,&m);
        long long av = 0;
        for(int i = 0; i < n; i++){
            long A,B;
            scanf("%ld %ld",&A,&B);
            av += calc(B) - calc(A-1);
        }
        long long th = 0;
        for(int i = 0; i < m; i++){
            long A,B;
            scanf("%ld %ld",&A,&B);
            th += calc(B) - calc(A-1);
        }
        if(av == th){
            printf("Case #%d: Draw\n",cs);
        }else if(av > th){
            printf("Case #%d: Avengers\n",cs);
        }else{
            printf("Case #%d: Thanos\n",cs);
        }
    }
    return 0;
}