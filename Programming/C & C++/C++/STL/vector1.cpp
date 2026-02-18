#include<bits/stdc++.h>
using namespace std;

int main()
{
    /*int n;
    cin >> n;

    vector<int> vec(n);

    for(auto &x : vec){
        cin >> x;
    }

    for(auto x : vec){
        cout << x << " ";
    }
    cout << endl;*/

    vector<int> vec2;
    vec2.push_back(3);
    vec2.push_back(5);
    vec2.push_back(7);

    cout << " Vector size is: " << vec2.size() << endl;
    cout << " Vector capacity is: " << vec2.capacity() << endl;


    vec2.emplace_back(11);
    for(auto x : vec2){
        cout << x << " ";
    }
    cout << endl;

    
    vector<int> vec3(5,-1);
    for(auto x : vec3){
        cout << x << " ";
    }
    cout << endl;


}