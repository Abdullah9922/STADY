#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size of the array: ";
    cin>>n;

    cout<<endl<<endl;

    int arr[n];
    cout<<"Enter element: ";
    for(int i=0;i<n;i++)
        cin>>arr[i];

    cout<<"Elements are: ";
    for(auto x:arr)
        cout<<x<<" ";
    cout<<endl<<endl;

}