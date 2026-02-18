#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n][3];
    for(int i=0; i<n; i++){
        for(int j=0; j<3; j++){
            cin >> arr[i][j];
        }
    }

    int x = 0, y = 0, z = 0;
    for(int i=0; i<n; i++){
        x += arr[i][0];
    }

    for(int i=0; i<n; i++){
        y += arr[i][1];
    }

    for(int i=0; i<n; i++){
        z += arr[i][2];
    }

    if(x == 0 && y == 0 && z == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
}