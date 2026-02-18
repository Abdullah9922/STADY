
#include <bits/stdc++.h>
using namespace std;

string dict[10001];

bool isWord(string word, int d)
{
    for (int i = 0; i < d; i++)
        if (dict[i].compare(word) == 0)
            return true;
    return false;
}

void getWords(string in, int d)
{
    int k = 0;
        while (k <= in.size()-1){
        int j = in.size();
        while (j > k){
            string sub = in.substr(k, j-k);
            //cout << in << endl;
            //cout << sub << endl;
            if (isWord(sub, d)){
                cout << sub << endl;
                k = j;
                break;
            }
            j--;
            //cout << j << k << endl;
        }
    }
}

int main ()
{
    int d, q;
    while (cin >> d >> q){
        for (int i = 0; i < d; i++){
            cin >> dict[i];
        }
        sort(dict, dict+d);
        for (int i = 0; i < q; i++){
            string query;
            cin >> query;
            getWords(query, d);
        }
    }
    return 0;
}
