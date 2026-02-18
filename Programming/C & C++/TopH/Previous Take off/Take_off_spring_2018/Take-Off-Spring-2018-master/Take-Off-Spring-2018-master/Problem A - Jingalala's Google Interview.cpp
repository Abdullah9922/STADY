#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Competitive programming is a mind sport usually held over the Internet or a local network, involving participants trying to program according to provided specifications. Contestants are referred to as sports programmers. Competitive programming is recognized and supported by several multinational software and Internet companies, such as Google, and Facebook. There are several organizations who host programming competitions on a regular basis.";
    int ans = 0;
    for(int i = 0; i <  s.size(); i++)
        if(s[i] == 'a')ans++;
    cout << ans << endl;
    return 0;
}
