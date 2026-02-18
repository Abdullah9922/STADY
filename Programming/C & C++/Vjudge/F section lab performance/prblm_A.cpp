#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector <int> v1(n);
    for(int i=0; i<n; i++){
        cin>>v1[i];
    }


    int q;
    cin>>q;

    vector <int> v2(q);
    for(int i=0; i<q; i++){
        cin>>v2[i];
    }


    int flag, count = 0;
    for(int i=0; i<q; i++){

        flag = 0;
        for(int j=0; j<n; j++){

            if(v2[i] == v1[j]){
                count++;
                flag++;
                break;
            }

            if(flag != 0) break;
        }
        
    }

    cout<<count<<endl;

}