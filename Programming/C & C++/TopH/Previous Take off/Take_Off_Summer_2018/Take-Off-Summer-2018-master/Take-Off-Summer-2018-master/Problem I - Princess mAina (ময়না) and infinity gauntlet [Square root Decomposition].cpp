#include <bits/stdc++.h>

using namespace std;

vector <int> decseg, nums;
int seg;

void update(int n)
{
	decseg[n/seg]++;
	nums[n] = 1;
}

int query(int l, int r)
{
	int sum = 0;
	if(l/seg==r/seg){
		for(int i = l; i<=r; i++) sum += nums[i];
			return sum;
	}
	
	for(int i = l; i<(l/seg+1)*seg; i++) sum += nums[i];

	for(int i = l/seg+1; i<r/seg; i++){
		sum += decseg[i];
	}

	for(int i = (r/seg)*seg; i<=r; i++) sum += nums[i];

	return sum;
}

int main()
{
	//freopen("in1.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	int tc;
	scanf("%d", &tc);
	for(int i = 1; i<=tc; i++){
		printf("Case %d:\n", i);
		int n, q;
		scanf("%d %d", &n, &q);
		seg = sqrt(n);
		decseg.clear(), nums.clear();
		decseg.resize(n/seg+1), nums.resize(n+1);
		for(int i = 0; i<q; i++){
			int qtype;
			scanf("%d", &qtype);
			if(qtype==1){
				scanf("%d", &n);
				update(n);
			}
			else if(qtype==2){
				int l, r;
				scanf("%d %d", &l, &r);
				printf("%d\n", query(l, r));
			}
		}
	}
}