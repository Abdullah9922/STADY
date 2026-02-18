#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;

    int n;
    for(int j=1; j<= tc; j++){
        cin>>n;

        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }

        sort(v.begin(), v.end());

        int temp = 0, temp2 = 0;
        for(int i=0; i<n-1; i++){
            temp = v[i+1]-v[i];
            if(temp > temp2){
                temp2 = temp;
            }
        }

        int count = -1;
        for(int i=0; i<n-1; i++){
            temp = v[i+1]-v[i];
            if(temp == temp2){
                count++;
            }
        }


        cout<<"Case "<<j<<": "<<temp2+count<<endl;

    }
}