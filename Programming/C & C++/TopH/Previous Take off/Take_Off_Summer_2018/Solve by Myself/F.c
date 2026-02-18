#include<stdio.h>
#include<string.h>

int main()
{
    int tc;
    scanf("%d",&tc);

    int n;
    for(int i=1;i<=tc;i++){
        scanf("%d",&n);

        char s[n];
        scanf("%s",s);

        int A=0, B=0;
        for(int j=0;j<n;j++){
            if(s[j]=='A') A++;
            else if(s[j]=='B') B++;
        }
        if(A>B) printf("Case %d: Avengers\n",i);
        else printf("Case %d: Black Order\n",i);
    }
}
