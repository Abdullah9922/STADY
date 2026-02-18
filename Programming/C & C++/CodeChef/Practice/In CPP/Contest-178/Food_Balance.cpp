#include <bits/stdc++.h>
using namespace std;

int main()
{
	int f1,p1,f2,p2;
    cin >> f1 >> p1 >> f2 >> p2;

    int diff1 = abs(f1-p1);
    int diff2 = abs(f2-p2);

    if(diff1 > diff2) cout << "Second" << endl;
    else if(diff1 < diff2) cout << "First" << endl;
    else cout << "Both" << endl;

}
