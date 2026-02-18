#include <bits/stdc++.h>

#define MAX 500005
#define INF 1000000000000000000
#define MOD 1000000007

typedef long long ll;
typedef unsigned long long llu;

using namespace std;

void IO()
{
    freopen("in3.txt","r",stdin);
    freopen("out3.txt","w",stdout);
}

int main()
{
    // IO();
    int t;
    char str[50005];
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        scanf("%s",str);
        int cnt=0;
        bool flag=false;
        for(int j=0;str[j]!='\0';j++){
            if(islower(str[j])||isupper(str[j])){
                flag=true;
            }
            if(!islower(str[j])&&!isupper(str[j])&&flag){
                cnt++;
                flag=false;
            }
        }
        if(flag)cnt++;
        printf("Case %d: %d\n",i,cnt);
    }
    return 0;
}