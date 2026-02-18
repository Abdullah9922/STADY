//https://judge.beecrowd.com/en/problems/view/2556

#include <stdio.h>
#include <stdlib.h>

#define MAX_N 1000
#define MAX_TIME 10000

// Function to compare integers for qsort
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int N; // Number of timestamps
    int timestamps[MAX_N];
    int time_intervals[MAX_N + 1] = {0}; // To store duration for each number of guests

    while (scanf("%d", &N) != EOF) {
        // Read the timestamps
        for (int i = 0; i < N; i++) {
            scanf("%d", &timestamps[i]);
        }

        // Sort the timestamps
        qsort(timestamps, N, sizeof(int), compare);

        // Simulate arrivals and departures
        int current_guests = 0;
        int max_guests = 0;
        int last_time = 0;

        for (int i = 0; i < N; i++) {
            // Update time interval for the current number of guests
            if (current_guests > 0) {
                time_intervals[current_guests] += timestamps[i] - last_time;
            }

            // Update the number of guests
            current_guests = (i % 2 == 0) ? current_guests + 1 : current_guests - 1;

            // Update max guests
            if (current_guests > max_guests) {
                max_guests = current_guests;
            }

            // Update last processed time
            last_time = timestamps[i];
        }

        // Find the longest duration for the maximum number of guests
        int longest_duration = time_intervals[max_guests];

        // Output the result for the current test case
        printf("%d %d\n", max_guests, longest_duration);

        // Reset time_intervals for the next test case
        for (int i = 0; i <= max_guests; i++) {
            time_intervals[i] = 0;
        }
    }

    return 0;
}
