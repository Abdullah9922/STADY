#include <bits/stdc++.h>
using namespace std;

int main(){
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	int t, tc=1;
	scanf("%d", &t);
	int ar[10];
	while(t--){
		int sum=0, tmp;
		for(int i=0; i<10; i++){
			scanf("%d", &ar[i]);
			sum+=ar[i];
		}
		int f=1;
		if(sum!=0) f=0;
		if(f){
			for(int i=1; i<10 && f; i+=2){
				if(ar[i-1]>=ar[i]){
					f=0;
				}
			}
			for(int i=2; i<10 && f; i+=2){
				if(ar[i-1]<=ar[i]){
					f=0;
				}
			}
		}
		if(f){
			printf("Case %d: Yes\n", tc);
		}
		else printf("Case %d: No\n", tc);
		tc++;
	}
	return 0;
}