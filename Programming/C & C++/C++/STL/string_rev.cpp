#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s = {"Ishtyaq Ahmed"};
    
    int st = 0, end = s.size()-1;
    
    while(st < end){
        swap(s[st++],s[end--]);
    }
    cout << s << endl;

    reverse(s.begin(),s.end());
    cout << s << endl;
}