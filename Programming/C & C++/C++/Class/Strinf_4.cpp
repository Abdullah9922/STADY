#include<iostream>
#include<string>
using namespace std;

int main()
{
    string letters;
    cout<<"Enter the string: ";
    getline(cin,letters);
    int len = letters.length();
    int pos=0;

    for(auto c : letters){

        int spaces = len - (pos+1);
        while(spaces>0){
            cout<<" ";
            spaces--;
        }

        for(int i=0; i<pos; i++){
            cout<<letters.at(i);
        }

        cout<<c;
        for(int i=pos-1; i>=0; i--){
            cout<<letters.at(i);
        }
        cout<<endl;
        pos++;

    }

}