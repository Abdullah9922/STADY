#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    
    int h = 0, x = 0;
    while( a > 0){
        h += a;
        x += a;
        a = x / b;
        x %= b;
    }

    cout << h << endl;
}