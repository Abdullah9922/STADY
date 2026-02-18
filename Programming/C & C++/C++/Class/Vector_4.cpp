#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    // erase all even number
    vector <int> v = {1,2,3,4,5,6,7,8,9,10};

    for(auto i = v.begin(); i!=v.end();)
    {
        if(*i % 2 == 0)
            v.erase(i);
        
        else i++;
    }

    for(auto j:v)
        cout<<j<<" ";
    cout<<endl<<endl;


    // sort
    vector <int> v2 = {10,2,-1,4,79,60};
    int temp;
    for(int x=0;x<v2.size();x++)
    {
        for(int y=0;y<v2.size();y++)
        {
            if(v2[x]<v2[y])
            {
                temp = v2[x];
                v2[x] = v2[y];
                v2[y] = temp;
            }
        }
    }

    for(auto j:v2)
        cout<<j<<" ";
    cout<<endl<<endl;



    //swap
    vector <int> a={1,2,3,4,5};
    vector <int> b={11,22,33,44,55};

    temp = a.size()<b.size()?a.size():b.size();
    int tmp;
    for(auto i=0; i<temp; i++)
    {
        tmp = a[i];
        a[i] = b[i];
        b[i] = tmp;
    }

    for(auto j:a)
        cout<<j<<" ";
    cout<<endl;

    for(auto j:b)
        cout<<j<<" ";
    cout<<endl<<endl;



    // erase 
    vector <int> n = {1,2,3,4,5,6,7,8,9,10};
    vector <int> :: iterator it;
    it = n.begin();

    while(it != n.end())
    {
        if( *it % 2 == 0)
            n.erase(it);

        else it++;
    }

    for(auto j:n)
        cout<<j<<" ";
    cout<<endl<<endl;



    //swap
    a.swap(b);
    for(auto j:a)
        cout<<j<<" ";
    cout<<endl;

    for(auto j:b)
        cout<<j<<" ";
    cout<<endl<<endl;



    //  sort;
    vector <int> vec = {4,1,2,5,7,9,3,1};
    sort(vec.begin(),vec.end());
    for(auto j:vec)
        cout<<j<<" ";
    cout<<endl<<endl;

}