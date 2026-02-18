//https://judge.beecrowd.com/en/problems/view/1367

#include<stdio.h>
#include<string.h>

int main()
{
    int n;

    while(1){
        scanf("%d",&n);

        if( n == 0) return 0;

        char x,temp='z';
        char s[10];
        int t;

        int count = 0, sum = 0;
        for(int i=1;i<=n;i++){
            scanf(" %c %d %s", &x, &t, s);

            if(strcmp("incorrect", s) == 0)
                temp = x;

            if(strcmp("correct", s) == 0){
                count++;
                if(temp != x)
                    sum = sum + (t+20);
                else
                    sum += t;
            }
        }
        printf("%d %d\n",count,sum);
    }
}
