#include <bits/stdc++.h>
using namespace std;

bool isAlphaNum(char ch)
{

    if ((ch >= '0' && ch <= '9') || (tolower(ch) >= 'a' && tolower(ch) <= 'z'))
    {
        return true;
    }

    return false;
}

bool isPlalindrome(string s)
{
    int st = 0, end = s.length() - 1;

    while (st <= end)
    {

        if (!isAlphaNum(s[st]))
        {
            st++;
            continue;
        }

        if (!isAlphaNum(s[end]))
        {
            end--;
            continue;
        }

        if (tolower(s[st++]) != tolower(s[end--]))
            return false;
    }

    return true;
}

int main()
{
    string s;
    cin >> s;

    if (isPlalindrome(s))
        cout << "It is a Palindrome." << endl;
    else
        cout << "It is not a Palindrome." << endl;
}