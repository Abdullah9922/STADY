#include <stdio.h>

int main(){
	int n, m, p, t, tc=0, ar[25][25], i, j, now;
	scanf("%d", &t);
	while(t--){
		for(i=0; i<25; i++) for(j=0; j<25; j++) ar[i][j]=0;
		scanf("%d %d %d", &n, &m, &p);
		for(i=1; i<=n; i++){
			for(j=1; j<=m; j++){
				scanf("%d", &ar[i][j]);
			}
		}
		now=1;
		while(p--){
			for(i=1; i<=n; i++){
				for(j=1; j<=m; j++){
					if(ar[i][j]==0){
						if(ar[i+1][j]==now) ar[i][j]=now+1;
						else if(ar[i-1][j]==now) ar[i][j]=now+1;
						else if(ar[i][j+1]==now) ar[i][j]=now+1;
						else if(ar[i][j-1]==now) ar[i][j]=now+1;
					}
				}
			}
			now++;
		}
		printf("Case #%d:\n", ++tc);
		for(i=1; i<=n; i++){
			for(j=1; j<=m; j++){
				if(j!=1) printf(" ");
				printf("%d", ar[i][j]?1:0);
			}
			printf("\n");
		}
	}
	return 0;
}
