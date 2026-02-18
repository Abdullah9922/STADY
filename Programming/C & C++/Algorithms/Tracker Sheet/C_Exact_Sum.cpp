#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while( cin>>n ){

        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        int m;
        cin>>m;

        int big,sml,temp,temp2=99999999,a,b;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){

                if(i != j && arr[i] + arr[j] == m){
                    big = arr[i]>arr[j] ? arr[i] : arr[j];
                    sml = arr[i]<arr[j] ? arr[i] : arr[j];

                    temp = big - sml;
                    if(temp <= temp2){
                        temp2 = temp;
                        a = sml;
                        b = big;
                    }
                }
            }
        }

        cout<<"Peter should buy books whose prices are "<<a<<" and "<<b<<"."<<endl;
        cout<<endl;
    }
}