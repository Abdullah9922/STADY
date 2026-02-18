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


    sort (v.begin(), v.end());


    vector <int> v2(n);
    int index = 0;
    for(int i=0; i<n; i++){
        v2 [index++] = v[i];
    }


    int flag ;
    for(int i=0; i<n; i++){

        flag = 0;
        for(int j=0; j<n; j++){

            if(v[i]*2 <= v[j]){
                v.at(i) = -1;
                flag++;
                break;
            }

            if(flag != 0) break;
        }
        
    }

    int count=0;
    for(int i=0; i<n; i++){
        if(v[i] == -1) count++;
    }

    cout<<v.size()-count<<endl;
}