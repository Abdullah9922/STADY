#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int m = n*2 - 1;
    int sum = 0;
    for(int i=m; i>=1; i -= 2)
    {
        sum += i;
    }
    sum = sum * 2;
    sum = sum - m;

    cout<<sum<<endl;
}