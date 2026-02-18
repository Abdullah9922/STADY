//https://judge.beecrowd.com/en/problems/view/1234

#include<stdio.h>
#include<string.h>

int main()
{
    char s[51];

    while(gets(s)){

        int l=strlen(s);
        int count1 =1, count2 =0;
        for(int i=0; i<=l; i++){

            if(s[i] == ' ') continue;
            else{

                if(count1){

                    if(s[i] >= 'a' && s[i] <= 'z')
                        s[i] = s[i] - 32;

                    count1=0;
                    count2=1;
                    continue;
                }

                if(count2){

                    if(s[i] >= 'A' && s[i] <= 'Z')
                        s[i] = s[i] + 32;

                    count1=1;
                    count2=0;
                    continue;
                }
            }
        }
        puts(s);
    }
}
