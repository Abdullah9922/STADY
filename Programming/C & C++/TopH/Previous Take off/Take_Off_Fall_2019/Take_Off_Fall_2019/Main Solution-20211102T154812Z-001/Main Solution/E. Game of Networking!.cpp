#include <stdio.h>

int main()
{
	int n, i, x;
	scanf("%d", &n);

	int ct = 0;

	for(i = 0; i < n; i++){
		scanf("%d", &x);
		if(!x) ct++;
	}

	if(n == 1){
		printf("Beriye jao, beyadob kothakar!\n");
		return 0;
	}

	if(ct) printf("Solution Achhe Habibi!\n");
	else printf("Beriye jao, beyadob kothakar!\n");

	return 0;
}
