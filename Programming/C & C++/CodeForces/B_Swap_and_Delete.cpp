#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        string s;
        cin >> s;

        int cnt[2] = {0, 0};

        // Count number of 0s and 1s
        for(char c : s) {
            cnt[c - '0']++;
        }

        for(int i = 0; i <= s.size(); i++) {

            if(i == s.size() || cnt[1 - (s[i] - '0')] == 0) {
                cout << s.size() - i << endl;
                break;
            }

            cnt[1 - (s[i] - '0')]--;
        }
    }

    return 0;
}