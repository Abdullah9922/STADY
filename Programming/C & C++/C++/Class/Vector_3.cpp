#include<iostream>
#include<vector>
using namespace std;

int main()
{
    // using itreator
    vector <int> v={1,2,3,4,5,6,3};
    vector <int> :: iterator i; // it is like pointer to point data in vector array string


    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    cout<<endl;
    cout<<endl;
    cout<<endl;


    // begin, end.
    for(i = v.begin(); i!=v.end(); i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl<<endl;


    //pop back;
    vector <int> v2 = {5,4,6,9,7,2,1,666};
    v2.pop_back();

    for(auto i:v2)
        cout<<i<<" ";
    cout<<endl<<endl;




    // insert
    vector <int> :: iterator it;
    it = v2.begin();
    v2.insert(it,3,69);
    
    for(auto j:v2)
        cout<<j<<" ";
    cout<<endl<<endl;


    // erase element
    v2.erase(v.begin()+3);
    for(auto j:v2)
        cout<<j<<" ";
    cout<<endl<<endl;


    v2.erase(v.begin(),v.begin()+3);
    for(auto j:v2)
        cout<<j<<" ";
    cout<<endl<<endl;
}