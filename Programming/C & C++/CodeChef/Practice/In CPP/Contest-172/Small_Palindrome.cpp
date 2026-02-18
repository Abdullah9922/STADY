#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;

    int x,y;
    while(tc--){
        cin>>x>>y;

        if(x == 0){
            while(y--){
                cout<<"2";
            }
            cout<<endl;
        }

        else if(y == 0){
            while(x--){
                cout<<"1";
            }
            cout<<endl;
        }

        else{

            int a = (x/2) - 1;
            int a2 = x/2;
            long long int n1 = 1;


            int b = (y/2) - 1;
            int b2 = y/2;
            long long int n2 = 2;



            while(a--){
                n1 = (n1 * 10) + 1;
            }

            while(y--){
                n1 = (n1 * 10) + 2;
            }

            while(a2--){
                n1 = (n1 * 10) + 1;
            }
            



            while(b--){
                n2 = (n2 * 10) + 2;
            }

            while(x--){
                n2 = (n2 * 10) + 1;
            }

            while(b2--){
                n2 = (n2 * 10) + 2;
            }

            //cout<<n1<<"  "<<n2<<endl;

            cout<< (n1>n2?n2:n1) <<endl;
        }
    }
}
