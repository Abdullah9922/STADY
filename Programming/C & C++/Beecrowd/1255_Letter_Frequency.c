//https://judge.beecrowd.com/en/problems/view/1255

#include<stdio.h>

int main()
{
    int tc;
    scanf("%d",&tc);

    char s[99999];
    while(tc--){
        scanf("%s",s);

        int count1=0, count2=0;
        char x1, x2;

        for(int i=0;i!='\0';i++){
            for(int j=0;j!='\0';j++){
                if(s[i] == s[j]){
                    count1++;
                    x1 = s[i];
                }
            }

            if(count1>=count2){
                count2 = count1;
                x2 = x1;
            }
            count1=0;
        }
        printf("\n--->%c\n",x2);
    }
}
