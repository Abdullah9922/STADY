#include <bits/stdc++.h>
using namespace std;

int main()
{
	int tc;
    cin>>tc;

    int n;
    while(tc--){
        cin>>n;

        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }

        int temp;
        for(int i=0; i<n; i++){

            if(i == n-1){

                temp = *max_element(v.begin(), v.begin()+i);
                if(temp <= v[i]) cout<<"1"<<endl;
                else cout<<"0"<<endl;
            }
            
            else{

                if(i == 0) cout<<"1 ";

                else{
                    
                    temp = *max_element(v.begin(), v.begin()+i);
                    if(temp <= v[i]) cout<<"1 ";
                    else cout<<"0 ";
                }
            }
        }
    }
}
