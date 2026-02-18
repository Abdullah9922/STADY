//https://judge.beecrowd.com/en/problems/view/1217

#include <stdio.h>
#include <string.h>

int main() {
    int tc;
    char s[10000];
    float price, sumP = 0, sumA = 0;

    scanf("%d", &tc);

    for (int j = 1; j <= tc; j++) {
        scanf("%f", &price);
        getchar();

        fgets(s, sizeof(s), stdin);
        s[strcspn(s, "\n")] = '\0';

        sumP += price;

        int l = strlen(s);
        int count = 1;
        for (int i = 0; i < l; i++) {
            if (s[i] == ' ')
                count++;
        }

        printf("day %d: %d kg\n", j, count);
        sumA += count;
    }

    printf("%.2f kg by day\n", sumA / tc);
    printf("R$ %.2f by day\n", sumP / tc);

    return 0;
}


