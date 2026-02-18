#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n;

    vector<int> v1(n);
    for (int i = 0; i < n; i++) {
        cin >> v1[i];
    }

    cin >> m;
    vector<int> v2(m);
    for (int i = 0; i < m; i++) {
        cin >> v2[i];
    }

    for (int i = 0; i < m; i++) {
        int a = -1, b = -1;

        for (int j = 0; j < n; j++) {
            if (v2[i] > v1[j]) a = max(a, v1[j]); 
            if (v2[i] < v1[j]) b = (b == -1) ? v1[j] : min(b, v1[j]);
        }

        if(a != -1 && b != -1)
            cout << a << " " << b << endl;
        else if(a == -1 && b != -1){
            cout<<"X"<<" "<<b<<endl;
        }
        else if(a != -1 && b == -1){
            cout<<a<<" "<<"X"<<endl;
        }
        else cout<<"X"<<" "<<"X"<<endl;
            
    }

    return 0;
}
