#include<bits/stdc++.h>
using  namespace std;

int main()
{
    long long int n,m,a;
    cin >> n >> m >> a;


    long long int p,q;
    if(m % a == 0){
        p = m / a;
    }

    else {
        p = m / a;
        ++p;

    }


    if(n % a == 0){
        q = n / a;
    }

    else {
        q = n / a;
        ++q;
    }

    cout << (p * q) << endl;
}