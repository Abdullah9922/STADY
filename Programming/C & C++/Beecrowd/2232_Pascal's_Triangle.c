//https://judge.beecrowd.com/en/problems/view/2232
#include <stdio.h>

int main() {
    int T, N;


    scanf("%d", &T);


    for (int t = 0; t < T; t++) {

        scanf("%d", &N);


        long long total_sum = 0;


        long long power_of_2 = 1;
        for (int i = 0; i < N; i++) {
            total_sum += power_of_2;
            power_of_2 *= 2;
        }

        printf("%lld\n", total_sum);
    }

    return 0;
}

