#include<bits/stdc++.h>
using namespace std;


string removeOruccences(string s, string part)
{
    while(s.find(part) < s.length() && s.length() >0){ // s.find("string name") it is return the starting index of that string
        s.erase(s.find(part),part.length()); // s.erase(starting index, lenght of the string)
    }

    return s;
}



int main()
{
    string s;
    cin >> s;

    string p;
    cin >> p;


    cout << removeOruccences(s,p) << endl;
    
}