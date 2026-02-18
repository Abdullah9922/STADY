#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    int m, a, b, c;
    while(tc--){
        cin >> m >> a >> b >> c;

        int count = 0;
        int m1 = m, m2 = m;

        if(m1 >= a){
            count += a;
            m1 -= a;
        }
        else if (a > m1){
            count += m1;
            m1 = 0;
        }

        if(m2 >= b){
            count += b;
            m2 -= b;
        }
        else if(b > m2){
            count += m2;
            m2 = 0;
        }

        m = m1 + m2;
        if(m > 0){
            if(m >= c) count += c;
            else if (c > m) count += m;
        }

        cout << count << endl;

    }
}