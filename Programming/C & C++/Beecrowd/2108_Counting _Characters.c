//https://judge.beecrowd.com/en/problems/view/2108

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char s[1000], ss[1000], nss[1000] = "";
    int max = 0, ind = 0;

    while (1) {

        if (fgets(s, sizeof(s), stdin) == NULL) {
            break;
        }


        s[strcspn(s, "\n")] = 0;
        if (strcmp(s, "0") == 0) {
            printf("%s\n", nss);
            break;
        }

        ss[0] = '\0';
        int cnt = 0;

        for (int i = 0; i < strlen(s); ++i) {
            if (s[i] == ' ') {
                printf("%d-", cnt);

                if (max <= cnt) {
                    max = cnt;
                    strcpy(nss, ss);
                    ind = 0;
                }
                cnt = 0;
                ss[0] = '\0';
            }

             else {
                int len = strlen(ss);
                ss[len] = s[i];
                ss[len + 1] = '\0';
                cnt++;
                ind++;
            }
        }
        printf("%d\n", cnt);
    }

    return 0;
}


