#include <bits/stdc++.h>
using namespace std;

map <string, bool> m;

void solve(string query)
{
	int sp = 0;
	while(sp<query.size()){
		for(int lp = query.size()-1; lp>=sp; lp--){
			if(m.find(query.substr(sp, (lp-sp+1)))!=m.end()) { cout<<query.substr(sp, (lp-sp+1))<<endl; sp = lp + 1;}
		}
	}
}

int main()
{
	int d, q;
	while(scanf("%d %d", &d, &q)==2){
        m.clear();
        for(int i = 0; i<d; i++) { string x; cin>>x; m[x] = true; }

        for(int i = 0; i<q; i++){
            string query;
            cin>>query;
            solve(query);
        }
	}
}

