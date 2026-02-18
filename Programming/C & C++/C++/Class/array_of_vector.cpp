#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector <int> v[3];
    // v[0].push_back(1);
    // v[0].push_back(34);
    // v[1].push_back(24);
    // v[2].push_back(95);
    // v[2].push_back(99);
    // v[2].push_back(91);



    for(int i=0; i<3; i++)
    {
        int n;
        cout<< "Enter size of vectior "<<i+1<<" ->";
        cin>>n;

        for(int j=0; j<n; j++)
        {
            int a;
            cin>>a;
            v[i].push_back(a);
        }
    }




    for(int i=0; i<3; i++)
    {
        cout<<"Number of element in vector "<<i+1<< " are "<<v[i].size()<<endl;
        for(int j=0; j<v[i].size(); j++)
        {
            cout<<v[i][j]<<"  ";
        }
        cout<<endl;
    }

}