#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc,n,av,th;
    scanf("%d",&tc);
    for(int cs = 1; cs <= tc; cs++){
       scanf("%d",&n);
       char A[n+5];
       scanf("%s",A);
       av = th = 0;
       for(int i = 1; i < strlen(A); i++){
          if(A[i] == A[i-1]){
             if(A[i] == 'A') av++;
             else th++;
          }
       }
       printf("Case %d: %s\n",cs,av > th ? "Avengers":"Black Order");
    }
    return 0;
}