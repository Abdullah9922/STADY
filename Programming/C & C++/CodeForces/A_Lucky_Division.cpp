#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if( n % 4 == 0 || n % 7 == 0 ||  n % 47 == 0 || n % 74 == 0 || n % 77 == 0 || n % 44 == 0 || n % 477 == 0 || n % 447 == 0 || n % 474 == 0 || n % 444 == 0){
        cout << "YES" << endl;
        return 0;
    }

    int rem = 0;
    while( n > 0 ){
        rem = n % 10;

        if( rem != 4 && rem != 7){
            cout << "NO" << endl;
            return 0;
        }

        n /= 10;
    }

    cout << "YES" << endl;
}