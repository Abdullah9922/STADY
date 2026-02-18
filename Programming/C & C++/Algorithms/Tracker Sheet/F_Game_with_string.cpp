#include <iostream>
#include <stack>
using namespace std;

string determineWinner(const string &s) {
    stack<char> stk;
    int moves = 0;
    
    for (char c : s) {
        if (!stk.empty() && stk.top() == c) {
            stk.pop();  // Remove the matching pair
            moves++;  // Count the move
        } else {
            stk.push(c);
        }
    }
    
    return (moves % 2 == 1) ? "Yes" : "No";
}

int main() {
    string s;
    cin >> s;
    cout << determineWinner(s) << endl;
    return 0;
}
