//https://judge.beecrowd.com/en/problems/view/1980

#include<stdio.h>
#include<string.h>

int main()
{
    char s[16];

    while(1){
        scanf("%s",s);

        if(s[0] == '0') return 0;

        int l = strlen(s);
        int flag =1;
//    for(int i=0;i<=l;i++){
//        for(int j=0;j<=l;j++){
//            if(i != j && s[i] == s[j])
//                flag = 0;
//        }
//    }

        long long int fact = 1;
        if(flag){
            for(int i=1;i<=l;i++)
                fact *= i;
            printf("%lld\n",fact);
        }
    }
}
