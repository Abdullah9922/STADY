#include <bits/stdc++.h>
using namespace std;

int main()
{
	int tc;
    cin>>tc;

    int n;
    while(tc--){
        cin>>n;

        if(n == 1) cout<<"1"<<endl;
        else if( n == 5) cout<<"2"<<endl;

        else if(n%2 == 0){
            n = n / 2;
            cout<< n+1 <<endl;
        }
        else{
            n = n / 2;
            cout<<n<<endl;
        }
    }

}
