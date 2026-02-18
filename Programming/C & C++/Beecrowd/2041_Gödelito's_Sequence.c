//https://judge.beecrowd.com/en/problems/view/2041

#include <stdio.h>
#include <string.h>

#define MAX_LEN 100000

void generate_sequence(int n) {
    char current[MAX_LEN] = "3";
    char next[MAX_LEN];

    for (int i = 1; i < n; i++) {
        int len = strlen(current);
        int index = 0;
        int count = 1;

        for (int j = 1; j <= len; j++) {
            if (current[j] == current[j - 1]) {
                count++;
            } else {
                index += sprintf(next + index, "%d%c", count, current[j - 1]);
                count = 1;
            }
        }

        strcpy(current, next);
    }

    printf("%s\n", current);
}

int main() {
    int N;
    while (scanf("%d", &N) != EOF) {
        generate_sequence(N);
    }
    return 0;
}
