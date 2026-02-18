//https://judge.beecrowd.com/en/problems/view/1120

#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    char s[99999];
    char s2[99999];

    while(1){
        scanf("%d",&n);
        scanf("%s",s);

        if (n && strlen(s) == 1 && s[0] == 0) return 0;

        int count=0;
        for(int i=0;i<=strlen(s);i++){
            if(s[i] != n)
                s2[count++] = s[i];
        }
        puts(s2);
    }

}
