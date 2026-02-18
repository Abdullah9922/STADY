//https://judge.beecrowd.com/en/problems/view/1241

#include<stdio.h>
#include<string.h>

int main()
{
    int tc;
    scanf("%d",&tc);

    char a[1001],b[1001];
    while(tc--){
        scanf("%s %s",a,b);

        int count=0;
        for(int i=strlen(a),j=strlen(b); j>=0; j--,i--)
            if(b[j] == a[i]) count++;

        if(count == strlen(b)+1)
            printf("encaixa\n");
        else printf("nao encaixa\n");
    }
}
