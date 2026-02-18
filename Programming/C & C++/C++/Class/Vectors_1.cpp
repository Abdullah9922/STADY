#include<iostream> 
#include<vector>
using namespace std;

int main()
{
    // 1st mathord using push_back;
    vector <int> num;
    num.push_back(2);
    num.push_back(5);
    num.push_back(7);

    cout<<num[0]<<endl;







    // 2nd mathord 
    int value;
    for(int i=0;i<3;i++){
        cout<<"Enter value: ";
        cin>>value;
        num.push_back(value); 
    }

    cout<<num[3]<<endl;
    cout<<"size of vector: "<<num.size()<<endl;
    cout<<"Capacity of vector: "<<num.capacity()<<endl<<endl;







    // 3rd mathord 
    vector <int> num2(10,5); // ae khane 5 assine hobe 10 ber.
    for(auto i:num2)
        cout<<i<<" ";
    cout<<endl;






    // 4th mathord 
    vector <int> num3(10);  // 10 is size here.
    fill(num3.begin(),num3.end(),99);

    for(auto i:num3)
        cout<<i<<" ";
    cout<<endl;







    // 5th mathord
    vector <int> num4 = {11,22,33,44,55,66,77,88};
    for(auto i:num4)
        cout<<i<<" ";
    cout<<endl;







    // 6th mathord
    vector <int> num5(num3.begin(),num3.end());
    for(auto i:num5)
        cout<<i<<" ";
    cout<<endl;
    
    
}