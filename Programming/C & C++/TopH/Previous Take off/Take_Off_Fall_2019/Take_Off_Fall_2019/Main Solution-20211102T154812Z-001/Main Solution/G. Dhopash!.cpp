#include<stdio.h>
#include<string.h>
int min(int a,int b){
    if(a > b) return b;
    return a;
}
int minOfFour(int a,int b,int c,int d){
    return min(a,min(b,min(c,d)));
}
int main(){
    // freopen("sample_2_in.txt","r",stdin);
    //freopen("sample_2_out.txt","w",stdout);
    int tc;
    scanf("%d",&tc);
    for(int cs = 1; cs <= tc; ++cs){
        int n;
        scanf("%d",&n);
        getchar();
        char s[20];
        int a,b,c,d;
        for(int i = 0 ; i <4; i++){
            scanf("%s",s);
            int x;
            scanf("%d",&x);
            if(!strcmp(s,"Arms")) a = x/2;
            if(!strcmp(s,"Backs")) b = x/2;
            if(!strcmp(s,"Seats")) c = x/2;
            if(!strcmp(s,"Structure")) d = x;
        }
        int mn = minOfFour(a,b,c,d);
        //int req = (n+1)/2;
        if(mn*2 >= n) printf("Case %d: Carry On!\n",cs);
        else printf("Case %d: Abort! Abort!\n",cs);
        printf("\n");
    }
    return 0;
}