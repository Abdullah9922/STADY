#include <bits/stdc++.h>
using namespace std;

vector <int> tree;

void update(int node, int left, int right, int x)
{
	if(x<left || right<x) return;
	if(left==right){
		//printf("Updating %d %d: %d\n", left, right, 1);
		tree[node] = 1;
		return;
	}
	update(node*2, left, (left+right)/2, x);
	update(node*2+1, (left+right)/2+1, right, x);
	tree[node] = tree[node*2] + tree[node*2+1];
}

int query(int node, int left, int right, int rleft, int rright)
{
	//cout<<node<<" "<<left<<" "<<right<<" "<<rleft<<" "<<rright<<endl;
	//left right
	//rleft rright
	if(left>rright || right<rleft) return 0;
	if(left>=rleft && rright>=right){
		return tree[node];
	}
	//printf("From node: %d, left: %d, right: %d return: %d\n", query(node*2, left, (left+right)/2, rleft, rright) + query(node*2+1, (left+right)/2+1, right, rleft, rright));
	return query(node*2, left, (left+right)/2, rleft, rright) + query(node*2+1, (left+right)/2+1, right, rleft, rright);
}

int main()
{
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	int tc;
	scanf("%d", &tc);
	for(int i = 1; i<=tc; i++){
		printf("Case %d:\n", i);
		int n, q;
		scanf("%d %d", &n, &q);
		tree.clear();
		tree.resize(n*4+1);
		for(int i = 0; i<q; i++){
			int qtype;
			scanf("%d", &qtype);
			//cout<<i<<" "<<q<<" "<<qtype<<endl;
			if(qtype==1){
				int x;
				scanf("%d", &x);
				update(1, 1, n, x);
			}
			else if(qtype==2){
				int l, r;
				scanf("%d %d", &l, &r);
				//cout<<l<<" "<<r<<endl;
				int res = query(1, 1, n, l, r);
				printf("%d\n", res); 
			}
		}
	}
}