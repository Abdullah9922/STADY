#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    cin >> tc;

    while (tc--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        vector<int> arr2(n);
        int index = 0;
        int temp, j;

        for (int i = 1; i < n; i++) {
            temp = arr[i];
            j = i - 1;

            while (j >= 0 && arr[j] > temp) {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = temp;
            arr2[index++] = j + 1;
        }

        for (int i = 0; i < n-1; i++) {
            cout << arr2[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
