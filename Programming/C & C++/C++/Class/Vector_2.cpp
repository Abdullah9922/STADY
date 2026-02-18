#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector <int> num = {1,3,5,6,3};
    cout<<"Enlment at index 3 is: "<<num[3]<<endl;
    cout<<"Enlment at index 3 is: "<<num.at(3)<<endl; // bound cheak 
    //cout<<"Enlment at index 10 is: "<<num.at(10)<<endl;
    cout<<"Last Enlment is: "<<num.back()<<endl;  // last element
    cout<<"First Enlment is: "<<num.front()<<endl;  // First element





    //update.
    num.at(2) = 9999;
    cout<<"Enlment at index 2 is: "<<num.at(2)<<endl;





    // update
    vector <int> num2(5);
    cout<<"Enter Element: ";
    for(int i=0;i<num2.size();i++)
        cin>>num2[i];

    cout<<"Elements are: ";
    for(auto i:num2)
        cout<<i<<" ";
    cout<<endl;
}