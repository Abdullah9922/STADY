#include <bits/stdc++.h>
using namespace std;

vector<int>BIT;
int n, q;

void update(int id){
	while(id<=n){
		BIT[id]++;
		id+=id&(-id);
	}
}

int query(int id){
	int res=0;
	while(id){
		res+=BIT[id];
		id-=id&(-id);
	}
	return res;
}

int main(){
	int t, tc=0;
	scanf("%d", &t);
	while(t--){
		printf("Case %d:\n", ++tc);
		scanf("%d", &n);
		scanf("%d", &q);
		BIT.clear();
		BIT.resize(n+1, 0);
		while(q--){
			int x, y, z;
			scanf("%d", &x);
			if(x==1) scanf("%d", &y), update(y);
			else scanf("%d %d", &y, &z), printf("%d\n", query(z) - query(y-1));
		}
	}
	return 0;
}