#include <bits/stdc++.h>
using namespace std;

int main()
{
	int x,y;
    cin>>x>>y;

    int count = 0;

    if(y>x){
        while(y>0 && y>x){
            y = y - x;
            count++;
        }
        cout<<count<<endl;
    }
    else cout<<"0"<<endl;

}
