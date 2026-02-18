#include <stdio.h>
#include <stdbool.h>

// Function to calculate the Dig Dreg number
long long int calculateDigDreg(int N) {
    // Initialize Dig Dreg to 0
    long long int digDreg = 0;

    // Iterate over each number from 1 to N
    for (int i = 1; i <= N; i++) {
        // Count the number of switches toggled by each friend
        // For each friend, count how many multiples of their rank exist up to N
        digDreg += N / i;
    }

    return digDreg;
}

// Function to check if a big number is divisible by Dig Dreg number
bool isDivisibleByDigDreg(long long int bigNumber, long long int digDreg) {
    // Check if the big number is divisible by Dig Dreg number
    if (bigNumber % digDreg == 0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int T;
    scanf("%d", &T);

    // Iterate over each test case
    for (int t = 0; t < T; t++) {
        int N;
        scanf("%d", &N);

        // Calculate Dig Dreg number
        long long int digDreg = calculateDigDreg(N);

        // Read the big number
        long long int bigNumber;
        scanf("%lld", &bigNumber);

        // Check if the big number is divisible by Dig Dreg number
        if (isDivisibleByDigDreg(bigNumber, digDreg)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
