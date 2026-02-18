// Nesar
#include <stdio.h>
#include <string.h>
void toLower(char s[],int n){
    for(int i = 0; i < n; i++){
        if(s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
    }
}
int main(){
    int tc;
    scanf("%d",&tc);
    for(int cs = 1; cs <= tc; ++cs){
        int n;
        scanf("%d",&n);
        char s[1010],s1[1010];
        scanf("%s",s);
        scanf("%s",s1);
        toLower(s,n);
        toLower(s1,n);
        if(!strcmp(s,s1)){
            printf("Case %d: vai problem solve hoy na\n",cs);
        }else{
            printf("Case %d: table e boisha thak solve hobe\n",cs);
        }
    }
    return 0;
}