#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector <int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    int max = *max_element(v.begin(), v.end());
    int index = find(v.rbegin(), v.rend(), max)-v.rbegin();

    int main_index = v.size()-1-index;

    iter_swap(v.begin() + main_index, v.end()-1);

    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

}