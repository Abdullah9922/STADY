//https://judge.beecrowd.com/en/problems/view/1309

#include <stdio.h>
#include <math.h>

// ফাংশন: ফরম্যাট করা সংখ্যা আউটপুটে কমা যোগ করে দেখানোর জন্য
void printFormattedNumber(double number) {
    long long integerPart = (long long)number; // পূর্ণসংখ্যার অংশ
    int fractionalPart = (int)round((number - integerPart) * 100); // ভগ্নাংশের অংশ

    // পূর্ণসংখ্যার অংশকে কমাসহ প্রিন্ট করা
    if (integerPart == 0) {
        printf("0");
    } else {
        long long digits[20]; // সংখ্যার অংশ স্টোর করার জন্য
        int i = 0;

        while (integerPart > 0) {
            digits[i++] = integerPart % 10;
            integerPart /= 10;
        }

        for (int j = i - 1; j >= 0; j--) {
            printf("%lld", digits[j]);
            if (j > 0 && j % 3 == 0) { // প্রতি ৩ সংখ্যার পর কমা যোগ
                printf(",");
            }
        }
    }

    // ভগ্নাংশের অংশ প্রিন্ট করা
    printf(".%02d\n", fractionalPart);
}

int main() {
    double n;
    int a;

    // ইনপুট নিয়ে প্রক্রিয়াকরণ
    while (scanf("%lf %d", &n, &a) != EOF) {
        n = n + ((double)a / 100);
        printf("$");
        printFormattedNumber(n);
    }

    return 0;
}
