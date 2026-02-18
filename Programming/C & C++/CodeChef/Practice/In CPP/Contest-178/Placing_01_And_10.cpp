#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int X, Y;
        cin >> X >> Y;
        int ans = X + Y + max(0, abs(X - Y) - 1);
        cout << ans << endl;
    }
    return 0;
}