#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n;
    cin >> n;

    int count = 0;
    
    while (n > 0) {
        long long int x = 1;
        
        while (x * 2 <= n) {
            x *= 2;
        }
        
        n -= x;
        count++;
    }

    cout << count << endl;
    return 0;
}
