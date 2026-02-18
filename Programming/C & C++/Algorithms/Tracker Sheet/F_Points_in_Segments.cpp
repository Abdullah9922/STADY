#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int T;
    cin >> T;
    for (int case_num = 1; case_num <= T; case_num++) {
        int n, q;
        cin >> n >> q;

        vector<int> points(n);
        for (int i = 0; i < n; i++) {
            cin >> points[i];
        }

        cout << "Case " << case_num << ":\n";

        for (int i = 0; i < q; i++) {
            int A, B;
            cin >> A >> B;

            auto lower = lower_bound(points.begin(), points.end(), A);
            auto upper = upper_bound(points.begin(), points.end(), B);

            int count = upper - lower;
            cout << count << endl;
        }
    }

    return 0;
}
