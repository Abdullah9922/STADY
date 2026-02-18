#include <stdio.h>
#include <math.h>
#include <string.h>
int main() {
    int t, len;
    char s[200000];
    scanf("%d", &t);
    while(t--)
    {
        scanf("%s", s);
        len=strlen(s);
        if(s[len-1]=='0')
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
    return 0;
}
