#include<bits/stdc++.h>
using namespace std;


int sumBinaryDigits(int n) {
    int sum = 0;
    
    while (n > 0) {
        sum += (n % 2); 
        n = n / 2;
    }
    
    return sum;
}



int main()
{
    int tc;
    cin>>tc;

    int n;
    while(tc--){
        cin>>n;

        vector <int> v(n);
        for(int i=0; i<n; i++){
            cin>> v[i];
        }

        if( n == 1){
            cout<<"YES"<<endl;
            continue;
        }
        
        int temp;
        for(int i=0; i<n-1; i++){
            for(int j=0; j<n-1-i; j++){
                
                if(v[j] > v [j+1] && sumBinaryDigits(v[j]) == sumBinaryDigits(v[j+1])){
                    temp = v[j];
                    v[j] = v[j+1];
                    v[j+1] = temp;
                }
                    
            }
        }


        cout<<endl<<endl;
        cout<<"-------------------------"<<endl;
        for(int i=0; i<n; i++){
            cout<<v[i]<<"  ";
        }
        cout<<endl;
        cout<<"--------------------------"<<endl;
        cout<<endl<<endl;


        int flag = 0;
        for(int i=0; i<n-1; i++){
            for(int j=0; j<n-1; j++){
                
                if(v[j] > v[j+1])
                    flag++;
                    
            }
        }

        if(flag == 0 ) cout<<"YES"<<endl;
        else cout<<"N0"<<endl;

    }
}