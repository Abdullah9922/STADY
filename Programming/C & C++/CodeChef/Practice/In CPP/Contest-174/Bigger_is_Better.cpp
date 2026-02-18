#include <iostream>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        string A;
        cin >> N >> A;
        if (A[0] == 'z') {
            cout << -1 << endl;
            continue;
        }
        char first = A[0] + 1;
        string S;
        S += first;
        for (int i = 1; i < N - 1; ++i) {
            S += 'a';
        }
        if (N > 1) {
            S += first;
        }
        cout << S << endl;
    }
    return 0;
}