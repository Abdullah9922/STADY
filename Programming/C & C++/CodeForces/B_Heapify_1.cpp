#include <bits/stdc++.h>
using namespace std;


bool inOrder(vector<int> &v)
{
    for(int i = 0; i < v.size()-1; i++){
        if(v[i] > v[i+1]) return false;
    }
    return true;
}



int main()
{
    int tc;
    cin >> tc;

    int n;
    while (tc--)
    {
        cin >> n;

        vector<int> v(n);
        for(auto &x : v){
            cin >> x;
        }


        for (int i = 0; i < n / 2; i++)
        {
            if(v[i] > v[2*i+1]){
                swap(v[i],v[2*i+1]);
            }
            
        }

        // for (int i = 1; i <= n; i++)
        // {
        //     cout << v[i] << " ";
            
        // }
        // cout << endl;

        if(inOrder(v)){
            cout << "YES" << endl;
        }

        else cout << "NO" << endl;
    }
}