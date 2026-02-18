//https://judge.beecrowd.com/en/problems/view/1332

#include<stdio.h>
#include<string.h>

int main()
{
    int tc;
    scanf("%d",&tc);

    char s[10];
    while(tc--){
        scanf("%s",s);

        int len = strlen(s);
        int count_t=0, count_w=0, count_o=0;
        int o=1;

        if(s[0] == 'o') o=0;

        if(len == 5)
            printf("3\n");
        else{
            for(int i=0;i<=len;i++){

                if(s[i] == 'o') count_o++;
                else if(s[i] == 't') count_t++;
                else if(s[i] == 'w') count_w++;

            }

            if(count_t&&count_w || o&&count_w&&count_o || o&&count_t&&count_o) printf("2\n");
            else printf("1\n");

        }
    }
}
