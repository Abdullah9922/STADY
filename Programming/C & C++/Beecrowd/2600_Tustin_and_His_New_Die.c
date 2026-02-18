//https://judge.beecrowd.com/en/problems/view/2600

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int arr[6];
        int OK = 1;
        int Check[7] = {0};

        for (int i = 0; i < 6; i++) {
            scanf("%d", &arr[i]);
            if (arr[i] < 1 || arr[i] > 6) {
                OK = 0;
            } else {
                if (!Check[arr[i]]) {
                    Check[arr[i]] = 1;
                } else {
                    OK = 0;
                }
            }
        }

        if (OK) {
            if ((arr[0] + arr[5] == 7) && (arr[1] + arr[3] == 7) && (arr[2] + arr[4] == 7)) {
                printf("SIM\n");
            } else {
                printf("NAO\n");
            }
        } else {
            printf("NAO\n");
        }
    }
    return 0;
}


