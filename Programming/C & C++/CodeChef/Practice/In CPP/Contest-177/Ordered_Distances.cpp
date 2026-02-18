#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        vector<int> X(N), Y(N);
        for (int i = 0; i < N; ++i)
        {
            cin >> X[i];
        }
        for (int i = 0; i < N; ++i)
        {
            cin >> Y[i];
        }

        int ans = -1;
        for (int i = 0; i < N; ++i)
        {
            int pivot = X[i];
            vector<pair<int, int>> list;
            for (int x : X)
            {
                list.emplace_back(abs(x - pivot), x);
            }
            sort(list.begin(), list.end());
            vector<int> candidate_Y;
            for (auto &p : list)
            {
                candidate_Y.push_back(p.second);
            }
            if (candidate_Y == Y)
            {
                ans = i + 1; // converting to 1-based index
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}