#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v = {2,4,2,55,6,7,3};

    cout << "3rd element is: " << *(v.begin()+3) << endl;
    // v.end() -> point the next element of last in the vector

    vector<int> :: iterator it;
    for(it = v.begin(); it != v.end(); it++){
        cout << *(it) << " " ;
    }
    cout<< endl;

    v.erase(v.begin()+3);


    vector<int> :: reverse_iterator rit;
    for(rit = v.rbegin(); rit != v.rend(); rit++){
        cout << *(rit) << " ";
    }
    cout << endl;
}