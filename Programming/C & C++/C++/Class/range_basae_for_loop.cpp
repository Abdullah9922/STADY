#include<iostream>
using namespace std;

int main()
{
    int a[] = {1,2,3,4,5,6,7,8,9,10};

    for(auto x : a)
        cout<<x<<endl;
    
    // i can easy print any data using it from any data structure

    cout<<endl<<endl;

    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    for(auto i : a){
        if(i%2 == 0)
            cout<<i<<" ";
    }
    cout<<endl;

}