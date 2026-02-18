#include <bits/stdc++.h>
#define Read()            freopen("in.txt", "r", stdin)
#define Write()           freopen("out.txt", "w", stdout)

using namespace std;

int main()
{
	//Read();
	//Write();
	int tc;
	scanf("%d", &tc);
	for(int i = 1; i<=tc; i++){
		long long n, k, t;
		scanf("%lld %lld %lld", &n, &k, &t);
		if(n<=k){
			printf("Case %d: %d\n", i, t*2);
		}
		else{
			n *= 2;
			long long x = n/k;
			if(x*k!=n) x++;
			printf("Case %d: %lld\n", i, x*t);
		}
	}
}