//https://judge.beecrowd.com/en/problems/view/1069

#include<stdio.h>
#include<string.h>

int conta_diamante(char s[]){
	int i, diamante, flag;
	for(i=diamante=flag=0; s[i]; i++){
		if(s[i] == '<') flag++;
		if(s[i] == '>' && flag >= 1){
			flag--;
			diamante++;
		}
	}
	return diamante;
}

int main(){
	int n, d; char s[1001];
	scanf("%d%*c", &n);
    while(n--){
		scanf("%[^\n]%*c", s);
		d = conta_diamante(s);
	    printf("%d\n", d);
    }
	return 0;
}
