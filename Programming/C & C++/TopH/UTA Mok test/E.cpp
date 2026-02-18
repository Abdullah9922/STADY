#include<bits/stdc++.h>
using namespace std;


bool find(int a, vector<int> v){

    for(int i=0; i <v.size(); i++){
        if(v[i] == a) return true;
    }
    
    return false;
}



int main()
{
    int tc;
    cin >> tc;

    int n;

    vector<int> arr;
    int a = 1, b=2;
    while(a <= 5050){
        arr.push_back(a);
         a = a + b;
         b++;
    }


    for(int i=1; i<=tc; i++){
        cin >> n;

        vector<pair<int, string>> v;
        for(int j=0; j<n ; j++){

            int word;
            string s;
            
            cin >> word >> s;
            v.push_back({word,s});
        }

        cout << "Case "<< i<< ": ";
        for(int j=0; j<n; j++){

            bool ans= find(v[j].first, arr);
            if(ans) cout << v[j].second<< " ";
        }
        cout << endl;
    }
}