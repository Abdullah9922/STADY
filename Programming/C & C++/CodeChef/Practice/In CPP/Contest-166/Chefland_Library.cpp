#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    cin >> tc;

    while (tc--) {
        int n;
        cin >> n;

        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        unordered_map<int, int> lastOccurrence;
        for (int i = 0; i < n; i++) {
            lastOccurrence[v[i]] = i + 1; 
        }

        int sum = 0;
        for (auto& entry : lastOccurrence) {
            sum += entry.second;
        }

        cout << sum << endl;
    }

    return 0;
}


/*#include <bits/stdc++.h>
using namespace std;

int main()
{
	int tc;
    cin>>tc;

    int n;
    while(tc--){
        cin>>n;

        vector <int> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }

        int Penalty_point, sum=0;
        for(int i=0; i<n; i++){

            Penalty_point = 0;
            for(int j=0; j<n; j++){

                if(v[i] == v[j]  && v[i] != -1){
                    Penalty_point = j+1;

                    if(i != j)
                    v[j] = -1;

                }
            }

            sum += Penalty_point;
        }

        cout<<sum<<endl;
    }

}
*/