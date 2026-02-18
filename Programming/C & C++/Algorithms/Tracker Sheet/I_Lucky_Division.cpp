#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    

    if(n % 4 == 0 || n % 7 == 0){
        cout<<"YES"<<endl;
        return 0;
    }

    else{
        int temp;
        while(n>0){

            temp = n % 10;

            if(temp == 7 || temp == 4){
                n = n / 10;
                continue;
            }

            else{
                cout<<"NO"<<endl;
                return 0;
            }
        }
        cout<<"YES"<<endl;
        return 0;
    }
}