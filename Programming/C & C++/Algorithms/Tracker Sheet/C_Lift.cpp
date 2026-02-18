#include<iostream>
using namespace std;

int main()
{
    int tc;
    cin>>tc;

    int o,d;
    for(int i=1; i<=tc; i++)
    {
        cin>>o>>d;

        int a = abs(o-d);
        int r = (a*4)+16+(o*4)+3;

        cout<<"Case "<<i<<": "<<r<<endl;
    }
}