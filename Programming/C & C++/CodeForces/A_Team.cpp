#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int x,y,z;
    int count = 0;
    while(n--){
        cin >> x >> y >> z;
        if(x+y+z >= 2) count++;
    }

    cout << count << endl;
}