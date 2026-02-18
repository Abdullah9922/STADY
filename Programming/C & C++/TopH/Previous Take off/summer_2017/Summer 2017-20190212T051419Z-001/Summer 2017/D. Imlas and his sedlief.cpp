#include <bits/stdc++.h>
using namespace std;

int main(){
	// freopen("input5.txt", "r", stdin);
	// freopen("output5.txt", "w", stdout);
	int n;
	scanf("%d", &n);
	int e=0, o=0, tmp;
	for(int i=0; i<n; i++){
		scanf("%d", &tmp);
		if(tmp%2==0) e++;
		else o++;
	}
	printf("%d %d\n", o, e);
	return 0;
}