#include <bits/stdc++.h>
using namespace std;

long long merge(vector<int> &arr, vector<int> &temp, int left, int mid, int right) {
    int i = left, j = mid + 1, k = left;
    long long inv_count = 0;

    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
            inv_count += (mid - i + 1); // Left side er baki elements joto, toto ta inversion
        }
    }

    while (i <= mid) temp[k++] = arr[i++];
    while (j <= right) temp[k++] = arr[j++];

    for (i = left; i <= right; i++) arr[i] = temp[i];

    return inv_count;
}

long long mergeSort(vector<int> &arr, vector<int> &temp, int left, int right) {
    if (left >= right) return 0;
    int mid = (left + right) / 2;
    long long inv_count = 0;
    
    inv_count += mergeSort(arr, temp, left, mid);
    inv_count += mergeSort(arr, temp, mid + 1, right);
    inv_count += merge(arr, temp, left, mid, right);

    return inv_count;
}

int main() {
    int n;
    while (cin >> n && n != 0) {
        vector<int> v(n), temp(n);
        for (int i = 0; i < n; i++) cin >> v[i];

        long long count = mergeSort(v, temp, 0, n - 1);
        cout << count << endl;
    }
    return 0;
}
