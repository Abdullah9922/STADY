#include <bits/stdc++.h>
using namespace std;
int main()
{
    int c,b;
    scanf("%d %d",&c,&b);
    int A[b+5];
    for(int i = 0; i < b; i++)
        scanf("%d",&A[i]);
    int ans = 0;
    int mx = A[0];
    for(int i = 0 ; i < b; i++){
        if(A[i] > mx){
            ans = i;
            mx = A[i];
        }
    }
    printf("%d\n",ans+1);
    return 0;
}
