#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    int temp;
    vector<int> e,o;
    for(int i=0; i<n; i++){

        if(v[i] % 2 == 0){
            temp = v[i];
            e.push_back(temp);
        }

        else{
            temp = v[i];
            o.push_back(temp);
        }
    }

    int sum = 0;
    if(e.size() == o.size() || e.size()+1 == o.size() || e.size() == o.size()+1)
    cout<<"0"<<endl;

    else{

        if(e.size() > o.size()){

            temp = e.size() - o.size() - 1;
            sort(e.rbegin(),e.rend());

            while(temp--){
                sum += e.back();
                e.pop_back();
            }
        }

        else if(e.size() < o.size()){

            temp = o.size() - e.size() - 1;
            sort(o.rbegin(),o.rend());

            while(temp--){
                sum += o.back();
                o.pop_back();
            }
        }

        cout<<sum<<endl;
    }

}