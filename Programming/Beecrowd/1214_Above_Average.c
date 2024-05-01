//https://judge.beecrowd.com/en/problems/view/1214
#include <stdio.h>

int main() {
    int C;
    scanf("%d", &C);

    while (C--) {
        int N;
        scanf("%d", &N);

        int grades[N];
        int sum = 0;

        for (int i = 0; i < N; i++) {
            scanf("%d", &grades[i]);
            sum += grades[i];
        }

        double average = (double) sum / N;
        int above_average = 0;

        for (int i = 0; i < N; i++) {
            if (grades[i] > average) {
                above_average++;
            }
        }

        double percentage_above_average = ((double) above_average / N) * 100;
        printf("%.3lf%%\n", percentage_above_average);
    }

    return 0;
}

