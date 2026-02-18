//https://judge.beecrowd.com/en/problems/view/1235

#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d\n", &n);  // '\n' যোগ করা হয়েছে, যাতে বাফার সমস্যা না হয়

    char s[101];
    while (n--) {
        fgets(s, sizeof(s), stdin);  // `fgets` ব্যবহার করা হয়েছে
        s[strcspn(s, "\n")] = '\0'; // Newline সরানো হয়েছে

        int l = strlen(s);
        char s2[102];

        int index = 0;

        // Left half reversed (middle to left)
        for (int i = l / 2 - 1; i >= 0; i--)
            s2[index++] = s[i];

        // Right half reversed (right to middle)
        for (int i = l - 1; i >= l / 2; i--)
            s2[index++] = s[i];

        s2[index] = '\0'; // Null character যোগ করা

        puts(s2);
    }

    return 0;
}
