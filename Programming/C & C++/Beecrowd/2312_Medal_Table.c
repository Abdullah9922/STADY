//https://judge.beecrowd.com/en/problems/view/2312

#include <stdio.h>
#include <string.h>

struct country {
    char name[100];
    int g;
    int s;
    int b;
};

// Function to swap two country structures
void swap(struct country *a, struct country *b) {
    struct country temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int tc;
    scanf("%d", &tc);

    struct country c[tc];
    for (int i = 0; i < tc; i++) {
        scanf("%s %d %d %d", c[i].name, &c[i].g, &c[i].s, &c[i].b);
    }

    // Sorting the countries
    for (int i = 0; i < tc; i++) {
        for (int j = i + 1; j < tc; j++) { // Start j from i+1 to avoid redundant comparisons
            if (c[i].g < c[j].g ||
                (c[i].g == c[j].g && c[i].s < c[j].s) ||
                (c[i].g == c[j].g && c[i].s == c[j].s && c[i].b < c[j].b) ||
                (c[i].g == c[j].g && c[i].s == c[j].s && c[i].b == c[j].b && strcmp(c[i].name, c[j].name) > 0)) {
                swap(&c[i], &c[j]);
            }
        }
    }

    // Printing the sorted results
    for (int i = 0; i < tc; i++) {
        printf("%s %d %d %d\n", c[i].name, c[i].g, c[i].s, c[i].b);
    }

    return 0;
}


