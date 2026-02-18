#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[100];

    cout << "Enter char array: ";
    cin.getline(str,100,'@'); // taking input will stop when it find '@'.
    cout << "Output is: " << str << endl;

}