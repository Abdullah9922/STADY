//https://judge.beecrowd.com/en/problems/view/1515

#include<stdio.h>
#include<string.h>

int main()
{
    int n;

    while(1) {
        scanf("%d", &n);
        getchar();

        if (n == 0) return 0;

        char s[55], s2[55];
        int y, t, temp = 999999, temp2;

        while (n--) {
            fgets(s, sizeof(s), stdin);
            s[strcspn(s, "\n")] = '\0';

            scanf("%d %d", &y, &t);
            getchar();

            temp2 = y - t;
            if (temp2 < temp) {
                temp = temp2;
                strcpy(s2, s);
            }
        }
        puts(s2);
    }
}

