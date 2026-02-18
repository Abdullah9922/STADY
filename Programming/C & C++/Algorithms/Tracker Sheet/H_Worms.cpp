#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> piles(n);
    for (int i = 0; i < n; i++) {
        cin >> piles[i];
    }

    vector<int> prefixSums(n);
    prefixSums[0] = piles[0];
    for (int i = 1; i < n; i++) {
        prefixSums[i] = prefixSums[i - 1] + piles[i];
    }

    int m;
    cin >> m;

    for (int i = 0; i < m; i++) {
        int wormLabel;
        cin >> wormLabel;

        int pileIndex = lower_bound(prefixSums.begin(), prefixSums.end(), wormLabel) - prefixSums.begin();
        cout << pileIndex + 1 << endl;
    }

    return 0;
}





// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n,m;
//     cin>>n;

//     int v1[n];
//     for(int x=1; x<=n; x++){
//         cin>>v1[x];
//     }

//     cin>>m;
//     int v2[n];
//     for(int x=1; x<=m; x++){
//         cin>>v2[x];
//     }

//     int count, index, flag ;

//     for(int k=1; k<=m; k++){  // v2[k] == 11

//         count = 1;
//         flag = 0;

//         for(int i=1; i<=n; i++){

//             index = v1[i]; //  v1[i] == 2
//             while(index--){  //  index == 1
                
//                 if(count == v2[k]){  // count == 2
//                     cout<<i<<endl;
//                     flag++;
//                 }

//                 count++;
//                 if(flag != 0) break;  
//             }

//             if(flag != 0) break;
//         }
//     }

// }