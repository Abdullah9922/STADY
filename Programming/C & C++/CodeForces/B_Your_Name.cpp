#include<bits/stdc++.h>
using namespace std;


bool freqCount(string s1, string s2)
{
    int arr1[26] = {0};
    int arr2[26] = {0};

    for(int i=0; i<s1.length(); i++){
        arr1[s1[i]-'a']++;
        arr2[s2[i]-'a']++;
    }

    for(int i=0; i<26; i++){
        if(arr1[i] != arr2[i]){
            return false;
        }
    }

    return true;
}



int main()
{
    int tc;
    cin >> tc;

    string s1,s2;
    int n;

    while(tc--){
        cin >> n;
        cin >> s1 >> s2;

        if(freqCount(s1,s2)) cout << "YES" << endl;
        else cout << "NO" << endl;

    }

    
}