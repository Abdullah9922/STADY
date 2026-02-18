//https://judge.beecrowd.com/en/problems/view/2523

#include<stdio.h>
#include<string.h>

int main()
{
    int n,c;
    char s[26];

    while(scanf("%s",s) != EOF){
        scanf("%d",&n);

        while(n--){
            scanf("%d",&c);
            printf("%c",s[c-1]);
        }
        printf("\n");
    }
}

