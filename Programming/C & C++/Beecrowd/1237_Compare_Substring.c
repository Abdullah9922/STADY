//https://judge.beecrowd.com/en/problems/view/1237

#include <stdio.h>
#include <string.h>


void sub(char s[], char s1[], int l) {
    int i, j, big = 0, c, l1 = strlen(s1);

    for (j = 0; j < l1; j++) {
        for (i = 0; i < l; i++) {
            c = 0;
            int m = i, n = j;

            while (m < l && n < l1 && s1[n] == s[m]) {
                c++;
                m++;
                n++;
            }

            if (c > big) {
                big = c;
            }
        }
    }
    printf("%d\n", big);
}


int main()
{
    char str[51], str1[51];
    int l,l1;

    while(gets(str) && gets(str1)){

        l = strlen(str);
        l1 = strlen(str1);

        if(l>=l1) sub(str, str1, l);
        else sub(str1, str, l1);
    }
}
