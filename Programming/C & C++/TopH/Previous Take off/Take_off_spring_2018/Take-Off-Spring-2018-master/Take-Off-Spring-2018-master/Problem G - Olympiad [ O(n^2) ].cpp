#include <bits/stdc++.h>
using namespace std;
int A[110],B[110];
int _search(int A[],int n, int key)
{
    for(int i = 0; i < n; i++) {
        if(A[i] == key)
            return i;
    }
    return -1;
}
int main()
{
    //freopen("in_2.txt","r",stdin);
    //freopen("out_2.txt","w",stdout);
    int testCase;
    scanf("%d",&testCase);
    for(int cases = 1; cases <= testCase; ++cases )
    {
        int n,m;
        char ch;
        scanf("%d %d %c",& n,&m,&ch);

        for(int i = 0; i < n; i++)
            scanf("%d",&A[i]);
        for(int i = 0; i < m; i++)
            scanf("%d",&B[i]);

        int Ans[220];
        int j = 0;
        if(ch == 'U') {
            for(int i = 0; i < n; i++) {
                Ans[j++] = A[i];
            }
            for(int i = 0; i < m; i++) {
                if(_search(A,n,B[i]) == -1) {
                    Ans[j++] = B[i];
                }
            }
        }
        else {
            for(int i = 0; i < m; i++){
                if(_search(A,n,B[i]) != -1) {
                    Ans[j++] = B[i];
                }
            }
        }
        sort(Ans,Ans+j);
        printf("Case #%d: ",cases);
        for(int i = 0; i < j; i++){
            printf("%d",Ans[i]);
            if(i == j-1)
                printf("\n");
            else
                printf(" ");
        }
        int x = 5;
    }
    return 0;
}
