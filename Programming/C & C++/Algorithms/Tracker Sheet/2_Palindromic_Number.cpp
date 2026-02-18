#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n,k=1;

    while (1)
    {
        cin>>n;
        if(n==0) return 0;

        vector <int> v;

        int temp;
        while(n>0)
        {
            temp = n % 10;
            v.push_back(temp);
            n /= 10;
        }

        


        vector <int> v2;
        int index = 0;
        for(int i=v.size()-1; i>=0; i--)
        {
            v2.push_back(v[i]);
        }


        int flag = 0;
        for(int i=0; i<v.size(); i++)
        {
            if(v[i] != v2[i])
            {
                flag++;
                break;
            }
        }

        if(flag == 0) cout<<"Case "<<k<<": Yes"<<endl;
        else cout<<"Case "<<k<<": No"<<endl;
        k++;
    }
}