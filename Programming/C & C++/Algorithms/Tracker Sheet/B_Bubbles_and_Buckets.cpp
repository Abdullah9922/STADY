#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    while(true){
        cin>>n;

        if(n == 0) return 0;

        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }

        int count=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n-1-i; j++){
                if(v[j]>v[j+1]){
                    swap(v[j], v[j+1]);
                    count++;
                }
            }
        }

        if(count % 2 == 0) cout<<"Carlos"<<endl;
        else cout<<"Marcelo"<<endl;
    }
}