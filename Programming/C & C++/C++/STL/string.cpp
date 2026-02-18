#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Abdullah";
    cout << s << endl;

    string s2 = "Ishtyaq ";
    string s3 = s2+s;
    cout << s3 << endl;

    cout << "Length: " << s3.length() << endl;

    string ss;
    cin >> ss; // " " paile input nibe na r.
    cout << ss << endl;


    cin.ignore();
    string ss2;
    getline(cin,ss2); // enter press na kora porjonto input nibe.
    cout << ss2 << endl;

}